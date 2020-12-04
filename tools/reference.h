//
// Created by jaenster on 23/11/2020.
//

#ifndef CHARON_REFERENCE_H
#define CHARON_REFERENCE_H

// header blocks
template<class>
class Reference;

template<class>
class WeakReference;

template<class T>
class Control;

template<class T>
class Referenced;

/** @internal*/
template<class T>
class BaseRef;

// actual implementation
template<class T>
class Control {
    friend BaseRef<T>;
    friend Reference<T>;
    friend WeakReference<T>;

    unsigned int shared = 0;
    unsigned int weak = 0;
    T *ptr;

    void add() {
        shared++;
    }

    void addWeak() {
        weak++;
    }

    void del() {
        if (--shared < 1) {
            // actually delete the ptr
            delete ptr;

            if (weak < 1) delete this;
            else ptr = nullptr;
        }
    }

    void delWeak() {
        // if this was the last weak and the object is gone
        if (--weak < 1 && ptr == nullptr) delete this;
    }

    ~Control() {
        delete ptr;
        delete this;
    }
};

/** @internal*/
template<class T>
class BaseRef {
    friend Referenced<T>;
    typedef std::unordered_map<DWORD, Control<T>> map_t;
protected:
    Control<T> *block = nullptr;

    static map_t map;

    Control<T> *getControlBlock(T *actualT) {
        if (block == nullptr) {
            auto got = map.find((DWORD) actualT);

            if (got == map.end()) map.insert((DWORD) actualT, block = new Control<T>);
            else block = got;
        }
        return block;
    }

};

template<class T>
class Reference : public BaseRef<T> {

public:
    inline Reference(Control<T>* block) {
        (this->block = block)->addWeak();
    }

    inline Reference(T *actualT) {
        this->getControlBlock(actualT)->add();
    }

    inline ~Reference() {
        if (this->block) this->block->del();
    }
};

template<class T>
class WeakReference : public BaseRef<T> {
    inline WeakReference(Control<T> block) {
        (this->block = block)->addWeak();
    }

    inline WeakReference(T *actualT) {
        this->getControlBlock(actualT)->addWeak();
    }

    inline ~WeakReference() {
        if (this->block) this->block->delWeak();
    }
};

template<class T>
class Referenced {
    friend T;
private:
    Control<T> *block = nullptr;
protected:
    Reference<T> getRef() {
        Reference<T> var(this->block);
        return var;
    }

public:
    typedef Reference<T> type;

    template<typename ... Args>
    inline static Reference<T> New(Args &&... args) {
        T *newSelf = new T(std::forward<Args>(args)...);
        newSelf->block = new Control<T>;
        return newSelf->getRef();
    }
};

#endif //CHARON_REFERENCE_H
