#include <iostream>
#include <set>

#include "headers/feature.h"
#include "headers/common.h"
#include "headers/hook.h"
#include "headers/remote.h"

namespace SkillWindow {

    REMOTEFUNC(bool __stdcall, CanSkillThis, (D2::Types::UnitAny * pUnit, int eSkill), 0x6447d0)
    REMOTEFUNC(Ghidra::D2SkillStrc * __fastcall, UNIT_GetSkillBySkillIdAndOwner,(D2::Types::UnitAny * pUnit, int eSkill, int nOwnerGUID), 0x6439b0)
    REMOTEFUNC(void __stdcall, SendPacket, (size_t aLen, DWORD arg1, BYTE * aPacket), 0x52AE50);
    REMOTEFUNC(unsigned int __stdcall, UNIT_GetSkillLevel,(D2::Types::UnitAny * pUnit, Ghidra::D2SkillStrc * pSkill, BOOL bCountBonuses), 0x6442a0);

    std::set<int> wantingToSkill;
    int skillAmount;

    int calculateDependency(int skillId) {
        Ghidra::D2SkillsTxt *skillData = (D2::sgptDataTable->pTxtSkills) + skillId;
        // Loop trough the
        for (char i = 0; i < 3; i++) {
            if (skillData->reqskill[i] == -1) continue;

            Ghidra::D2SkillStrc *depSkill = UNIT_GetSkillBySkillIdAndOwner(D2::PlayerUnit, skillData->reqskill[i], -1/* no owner*/);

            // If we dont have this skill yet, we need it. Or we have it without any base skills
            if (depSkill == nullptr || UNIT_GetSkillLevel(D2::PlayerUnit, depSkill, false) == 0) {
                // first calculate the dependencies of this
                calculateDependency(skillData->reqskill[i]);

                // then add it to the set
                wantingToSkill.insert(skillData->reqskill[i]);
            }

        }
        return 0;
    }

    int __fastcall SkillGetMaxLevelForSkill(int skillId) {
        // When clicked on the game
        bool shiftDown = !!GetAsyncKeyState(VK_SHIFT);

        // If we cant learn/improve this skill
        if (!CanSkillThis(D2::PlayerUnit, skillId) || shiftDown) {

            calculateDependency(skillId);
            wantingToSkill.insert(skillId);

            Ghidra::D2SkillStrc *depSkill = UNIT_GetSkillBySkillIdAndOwner(D2::PlayerUnit, skillId, -1/* no owner*/);

            skillAmount = 0;
            if (shiftDown) skillAmount = depSkill == nullptr ? 20 : 20 - UNIT_GetSkillLevel(D2::PlayerUnit, depSkill, 0) + 1;

            // tell the game we already max'd it out so it wont try to skill it
            return 0;
        }

        // its always 20, but apparently, this is variable in the game
        return 20;
    }

    void skillSkill(int skillId) {
        // 3b [WORD skill]
        BYTE aPacket[3] = {NULL};
        aPacket[0] = 0x3b; // skill a skill
        *(WORD *) &aPacket[1] = (WORD) skillId; // skill id
        SendPacket(3, 1, aPacket);
    }

    class : public Feature {
    public:

        void init() override {
            // Dont draw available skills
            // all of it
            // MemoryPatch(0x4ac6f5) << NOP_TO(0x4ac6f5+5);

            // Fool the game we draw all available skills for our current level
            MemoryPatch(0x4ac35f) << BYTESEQ{0xb8, 0x01, 0x00, 0x00, 0x00, 0x90, 0x90}; // mov EAX, 1; NOP; NOP

            // When clicking on a skill, override the SkillGetMaxLevelForSkill function with our own
            MemoryPatch(0x4abeb2) << CALL(SkillGetMaxLevelForSkill);
        }

        void gameLoop() override {
            if (!wantingToSkill.empty()) {

                int lastSkill = -1;
                // since we know exactly what we want to do with our points we can spend them all in a row
                for (auto it = wantingToSkill.begin(); it != wantingToSkill.end(); ++it) {
                    // Actually spend the skill points

                    skillSkill(lastSkill = (WORD) *it);
                }

                if (skillAmount-->0) for(;skillAmount-->0;) skillSkill(lastSkill);

                // Dont care anymore about these skills, clear the set
                skillAmount = 0;
                wantingToSkill.clear();
            }
        }

    } feature;

}
