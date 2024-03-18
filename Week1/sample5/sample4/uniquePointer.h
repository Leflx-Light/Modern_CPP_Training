#ifndef UNIQUEPOINTER_H
#define UNIQUEPOINTER_H

template <typename T>
class uniquePointer
{
private:
    T* _mptr;

public:
    uniquePointer(T* ptr):_mptr{ptr}{
        ptr = nullptr; // user pointer getting null.
    }


    uniquePointer(const T*&)= delete;
    uniquePointe& operator=(const T*) = delete;


    uniquePointer(T* &&)= default;
    uniquePointe& operator=(T*&&) = default;

    void Release(){ delete _mptr; _mptr = nullptr}

    ~uniquePointer(){delete _mptr;, _mptr = nullptr}

};

/*
   RAII - Resource acquisition is initialization (RAII)
   scope based resource management (SBRM)

*/


#endif // UNIQUEPOINTER_H
