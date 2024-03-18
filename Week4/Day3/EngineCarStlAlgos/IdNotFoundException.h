#ifndef IdNotFoundException_H
#define IdNotFoundException_H
#include<iostream>
#include<cstring>
#include<future>

class IdNotFoundException:public std::future_error
{
private:
       char* _msg;
public:

    IdNotFoundException()=delete;
    IdNotFoundException(const IdNotFoundException&) = delete;
    IdNotFoundException(IdNotFoundException&&) = default;
    IdNotFoundException& operator=(const IdNotFoundException&) = delete;
    IdNotFoundException&& operator=(IdNotFoundException&&) = delete;
  
    /*
      
    */
    IdNotFoundException(const char* msg, const std::future_errc& ec):future_error(ec){
         
        _msg = new char[strlen(msg)+1];
        
         strcpy(_msg,msg);
    }
    ~IdNotFoundException() {
        delete _msg;
    }

    virtual const char* what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{
        return _msg;
    }
};

#endif // IdNotFoundException_H
