/**
 *
 * @Author Jaenster
 * @see readme.me
 * @Description

 This contains classes that are spliced out of the ghidra files.

 Like the game only has a D2UnitStrc, but i want to have type specific functions
 As you cant drop() a monster, while an item doesnt have health

*/
#pragma once
#include "./main.h"

namespace Ghidra {

    struct D2UnitPlayer: public D2UnitStrc {

    };
    struct D2UnitMonster: public D2UnitStrc {

    };
    struct D2UnitObject: public D2UnitStrc {

    };
    struct D2UnitMissile: public D2UnitStrc {

    };
    struct D2UnitItem: public D2UnitStrc {

    };
    struct D2UnitTitle: public D2UnitStrc {

    };
}
