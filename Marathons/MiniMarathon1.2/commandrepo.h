#ifndef COMMANDREPO_H
#define COMMANDREPO_H
#include"command.h"
#include<stack>


class Repository
{
    std::stack<Command*> repo;
public:
    void Register(Command* cmd);
    Command* Retrieve();
    bool IsEmpty();

};


#endif // COMMANDREPO_H
