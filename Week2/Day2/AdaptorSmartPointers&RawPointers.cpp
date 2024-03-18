#include<iostream>
#include<vector>
#include<memory>
#include<functional>


class Employee
{
private:
    int _id;
    std::string _name;
    float _salary;

public:
    Employee()=default;
    Employee(const Employee&)=delete;
    Employee& operator=(Employee&)=delete;
    Employee(Employee&&)=delete;
    Employee&& operator=(Employee&&)=delete;
    ~Employee()=default;
    Employee(int id, std::string name, float salary):_id{id}, _name{name}, _salary{salary}{}

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
        os << "_id: " << rhs._id
           << " _name: " << rhs._name
           << " _salary: " << rhs._salary;
        return os;
    }

   float operator+(const Employee &rhs){
         return _salary+rhs._salary;
    }

    float operator-(const Employee &rhs){
         return _salary-rhs._salary;
    }

    void operator()(){
        std::cout<<"Tax for this employee at 10%"<<_salary*0.1f;
    }

    float salary() const { return _salary; }

    
};



/*
 Objective: take a container of  raw pointers to Employee.
 and filter and print details based on predicate passed.
*/


void Adaptor(
    const std::vector<Employee*>&data, 
    std::function<bool(Employee*)>predicate){
        for(Employee* ptr : data){
            if(predicate(ptr)){
                std::cout<<*ptr<<"\n";
            }
        }
    }

using EmployeePointer = std::shared_ptr<Employee>;

void Adaptor(
    const std::vector<EmployeePointer>&data, 
    std::function<bool(EmployeePointer)>predicate){
        for(EmployeePointer ptr : data){
            if(predicate(ptr)){
                std::cout<<*ptr<<"\n";
            }
        }
    }




    int main(){
        std::vector<Employee*> data{
            new Employee(101, "Harshit", 7880.0f),
            new Employee(102, "Sonu", 8880.0f),
        };

        Adaptor(data, 
        //find employee salary whose salary is above 8000.
        [](Employee* emp){
            if(emp){
              return emp->salary()>8000.0f;
             }else{
                return false;
                 }
            }
        );



        // shared pointer:
          std::vector<EmployeePointer> data2{
            std::make_shared<Employee>(101, "Harshit", 7880.0f),
            std::make_shared<Employee>(102, "Sonu", 8880.0f),
        };



        Adaptor(data2, 
        //find employee salary whose salary is above 8000.
        [](EmployeePointer emp){
            if(emp){
              return emp->salary()>8000.0f;
             }else{
                return false;
                 }
            }
        );
    }