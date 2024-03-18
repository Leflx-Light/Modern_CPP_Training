
#ifndef NOTVALIDNUMBEREXCEPTION_H
#define NOTVALIDNUMBEREXCEPTION_H

#include<iostream>
#include<cstring>
class NotValidNumberException:public std::exception
{
private:
    char * _msg;
public:
    NotValidNumberException()=delete;
    NotValidNumberException(const NotValidNumberException&)=delete;
    const NotValidNumberException& operator=(const NotValidNumberException&)=delete;
    NotValidNumberException(NotValidNumberException&&)=delete;
    NotValidNumberException&& operator=(NotValidNumberException&&)=delete;
    ~NotValidNumberException(){
        delete _msg;
    };

    NotValidNumberException(const char* msg){
        _msg = new char[strlen(msg)+1];
        strcpy(_msg, msg);

    }

    virtual const char*
    what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{
        return _msg;
    }
 

};



#endif // NOTVALIDNUMBEREXCEPTION_H
