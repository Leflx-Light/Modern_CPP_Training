#ifndef SMART_H
#define SMART_H

#include<iostream>

template<typename T>
class Smart {
    public:

   using FPTR = void(T::*)();

    Smart(T* p=nullptr):ptr(p){

    }
    Smart(const Smart& smp):ptr(smp.ptr){
        Smart& temp=const_cast<Smart&>(smp);
        temp.ptr=nullptr;
    }
    Smart(Smart&& smp)  noexcept: ptr(smp.ptr)
    {
          smp.ptr=nullptr;
    }

    Smart& operator=(const Smart& smp){
        Smart* temp(smp);
        Swap(smp);
        return *this;
    }
    Smart& operator=(const Smart&&) =delete;
    T* operator->() const
    {
        return ptr;
    }

    T& operator*() const
    {
        return *ptr;
    }


    Smart& operator->*(FPTR fc){
        fnc=fc;
        return *this;

    }

    void operator()() const
    {
        (ptr->*fnc)();
    }

    operator bool() const
    {
        return ptr!=nullptr;
    }

    void Swap(Smart* temp) const
    {
        std::swap(ptr,temp.ptr);
    }

    ~Smart()
    {
        delete ptr;
    }

    static void* operator new(size_t) = delete;
    static void*operator  new[](size_t)= delete;
    static void operator delete(void*) =delete;
    static void operator delete[](void*) = delete;

    private:
    T* ptr;
    FPTR fnc{NULL};
};



#endif // SMART_H
