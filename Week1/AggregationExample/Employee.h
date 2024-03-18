#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<cstring>

class Employee
{
private:
    std::string _name;
    int _id;
public:
    Employee()=default;
    Employee(const Employee&)=delete;
    Employee(Employee&&)=delete;
    Employee& operator=(const Employee&)=delete;
    Employee&& operator=(Employee&&)=delete;
    //copy constructor:
    Employee(std::string name, int id);
    
    //getters and setters:
    

    ~Employee() {}

    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

    int id() const { return _id; }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
};

#endif // EMPLOYEE_H
