
#ifndef IDNOTFOUNDEXCEPTION_H
#define IDNOTFOUNDEXCEPTION_H

#include<iostream>
#include<cstring>
class IdNotFoundException:public std::exception
{
private:
      char * _msg;
public:
    IdNotFoundException()=delete;
    IdNotFoundException(const IdNotFoundException&)=delete;
    IdNotFoundException(IdNotFoundException&&) = delete;
    IdNotFoundException& operator=(IdNotFoundException&)= delete;
    IdNotFoundException&& operator=(const IdNotFoundException&&)=delete;
    IdNotFoundException(const char* msg){
        _msg = new char[strlen(msg)+1];
        strcpy(_msg, msg);
    }
  
    ~IdNotFoundException() {
        delete _msg;
    }

    virtual const char*  what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{
          return _msg;
    }
};



#endif // IDNOTFOUNDEXCEPTION_H
