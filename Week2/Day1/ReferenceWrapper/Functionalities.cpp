#include "Functionalities.h"


// array of pointers.
void CreateObjects(Employee **employees, Project **project)
{
    project[0] = new Project("Pr101",66700.00f, 11);
    employees[0] = new Employee("emp101", "Sonu", 20000.00f, *project[0]);

}

void CreateObjects(std::vector<Employee*> &employees, std::vector<Project*> &project)
{
    project[0] = new Project("Pr101",66700.00f, 11);
    employees[0] = new Employee("emp101", "Sonu", 20000.00f, *project[0]);
}
