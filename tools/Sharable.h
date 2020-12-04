/**
 * @description A small wrapper around the the shared_ptr functionality of the std class.
 * @author Jaenster
 */
#ifndef SHAREABLE_H
#define SHAREABLE_H

#include <memory>


template<class self, class type_ptr=std::shared_ptr<self>>
class Shareable {
public:
    typedef type_ptr type;
    std::weak_ptr<self> weakPtr;

public:
    template<typename ... Args>
    _NODISCARD inline static type New(Args &&... args) {
        self *newSelf = new self(std::forward<Args>(args)...);

        auto r =  type_ptr(newSelf);
        newSelf->weakPtr = r;
        return r;
    }

    type getShared() {
        return std::shared_ptr<self>(this->weakPtr);
    }
};

#endif //SHAREABLE_H
