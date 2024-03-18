#ifndef MAKER_H
#define MAKER_H

#include"Smart.h"

template<typename T,typename... T1>
Smart<T> make_smart(T1&&... pac){
    return Smart<T>(new T(std::forward<T1>(pac)...));
}



#endif // MAKER_H
