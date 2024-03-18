#include "Project.h"

Project::Project(std::string projectid, float projectbudget, unsigned int teamsize):
_project_id{projectid}, _project_budget{projectbudget}, _team_size{teamsize}
{

}


std::ostream &operator<<(std::ostream &os, const Project &rhs) {
    os << "_project_id: " << rhs._project_id
       << " _project_budget: " << rhs._project_budget
       << " _team_size: " << rhs._team_size;
    return os;
}