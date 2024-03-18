#ifndef TESTER_H
#define TESTER_H

#include"Maker.h"

template<typename T>
void FuncRunner(Smart<T>& temp,typename Smart<T>::FPTR fp){
    (temp->*fp)();
}


#endif // TESTER_H
