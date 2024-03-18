#ifndef STACK_HPP
#define STACK_HPP
#include "StackEmptyException.hpp"
#include<list>
/*
  
  [   10    |   20    |   30         | ]
      front()            back()        end()  
     

*/



template <typename T>
class Stack
{
private:
    std::list<T>_data {};  


public:
    Stack()=default;
    Stack(const Stack&)=delete;
    Stack& operator=(const Stack&) = delete;
    Stack(Stack&& )= default;
    Stack& operator = (Stack&& )=default;
    ~Stack()=default;


// Functions::
    void Pop();
    void Push(T val);
    T Peek();
    size_t Size();
    bool IsEmpty();

};


#endif // STACK_HPP

template <typename T>
inline void Stack<T>::Pop()
{
    if(_data.empty()){
        //throw data empty.
         throw StackEmptyException("Stack is empty!!");
    }

    _data.pop_back();
}




template <typename T>
inline void Stack<T>::Push(T val)
{
     _data.push_back(val);
}





template <typename T>
inline T Stack<T>::Peek()
{
    if(_data.empty()){
            //throw stack empty!!!!
            throw StackEmptyException("Stack is empty!!");
        }
        return _data.back();
}





template <typename T>
inline size_t Stack<T>::Size()
{
      return _data.size();
}

template <typename T>
inline bool Stack<T>::IsEmpty()
{
     return _data.empty();
}
