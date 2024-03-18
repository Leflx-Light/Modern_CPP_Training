#ifndef EMPTYCLASSEXCEPTION_H
#define EMPTYCLASSEXCEPTION_H
#include<iostream>
#include<cstring>
class EmptyClassException:public std::exception
{
private:
      char * _msg;
public:
    EmptyClassException()=delete;
    EmptyClassException(const EmptyClassException&)=delete;
    EmptyClassException(EmptyClassException&&) = delete;
    EmptyClassException& operator=(EmptyClassException&)= delete;
    EmptyClassException&& operator=(const EmptyClassException&&)=delete;
    EmptyClassException(const char* msg){
        _msg = new char[strlen(msg)+1];
        strcpy(_msg, msg);
    }
  
    ~EmptyClassException() {
        delete _msg;
    }

    virtual const char*  what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{
          return _msg;
    }
};

#endif // EMPTYCLASSEXCEPTION_H
