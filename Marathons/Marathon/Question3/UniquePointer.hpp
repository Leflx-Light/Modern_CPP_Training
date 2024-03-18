#ifndef UNIQUEPOINTER_HPP
#define UNIQUEPOINTER_HPP

#include<iostream>
template <typename T>
class Unique_Pointer
{

public:
    void* operator new(size_t) = delete;
    void* operator new[](size_t) = delete;

    void operator delete(void *pt) = delete;
    void operator delete[](void *pt) = delete;

    using FPTR = void (T::*)();

    explicit Unique_Pointer(T *pt = nullptr) : pt(pt)
    { 
    }

    Unique_Pointer(const Unique_Pointer &smp) : pt(smp.pt)
    {
        Unique_Pointer &ref = const_cast<Unique_Pointer &>(smp);
        ref.pt = nullptr;
    }

    Unique_Pointer &operator=(const Unique_Pointer &par)
    {
        if (this == &par)
            return *this;

        Unique_Pointer<T> temp(par);
        this->swap(temp);

        return *this;
    }

    void swap(Unique_Pointer &tmp)
    {
        std::swap(this->pt, tmp.pt);
    }

    Unique_Pointer(Unique_Pointer &&smp) noexcept : pt(smp.pt)
    {
        smp.pt = nullptr;
    }

    Unique_Pointer &operator=(const Unique_Pointer &&par)
    {
        if (this == &par)
            return *this;

        Unique_Pointer<T> temp(std::forward(par));
        this->swap(temp);
        return *this;
    }

    T *operator->()
    {
        return pt;
    }

    T &operator*()
    {
        return *pt;
    }

    operator bool() const
    {
        return pt != nullptr;
    }

    Unique_Pointer &operator->*(FPTR fp)
    {
        this->fp = fp;
        return *this;
    }

    void operator()()
    {
        (pt->*fp)();
    }

    T *release()
    {
        T *obj = pt;
        pt = nullptr;
        return obj;
    }

    void reset(T *par = nullptr)
    {
        delete this->pt;
        this->pt = par;
    }

    ~Unique_Pointer() noexcept
    {
        delete pt;
    }

private:
    T *pt;
    FPTR fp{nullptr};
};

template <typename T, typename... PCK>
Unique_Pointer<T> make_unique(PCK &&...pck)
{
    // return Unique_Pointer<T>(new T(std::forward<PCK>(pck)...));
    T *tmp = new T(std::forward<PCK>(pck)...);
    return Unique_Pointer<T>(tmp);                    // Copy Ellision
}

template <typename T>
void TestMemberCallBack(Unique_Pointer<T> &sm, typename Unique_Pointer<T>::FPTR fp)
{
    std::cout << "Bussiness Start\n";
    (sm->*fp)();
    std::cout << "Bussiness End\n";
}

#endif