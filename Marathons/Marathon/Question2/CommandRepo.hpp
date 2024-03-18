#ifndef COMMANDREPO_HPP
#define COMMANDREPO_HPP

#include<stack>
#include "Command.hpp"

class CommandRepository
{
    std::stack<Command*> repo;

    public :
        void Register(Command* cmd)
        {
            try
            {
                repo.push(cmd);
                
            }
            catch(const char* e)
            {
                
            }
            
        }

        Command* Retrieve()
        {
            if(repo.size() != 0)
            {
                Command* cmd = repo.top();
                
                repo.pop();
                return cmd;

            }
            else {
                throw "Can't undo more\n";
            }
        }

        bool IsEmpty()
        {
            return repo.empty();
        }

};

#endif