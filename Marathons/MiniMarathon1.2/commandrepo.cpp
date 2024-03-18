#include"commandrepo.h"


void Repository::Register(Command* cmd)
    {
        repo.push(cmd);
    }
    Command* Repository::Retrieve()
    {
        Command* cmd = repo.top();
        repo.pop();
        return cmd;
    }
    bool Repository::IsEmpty()
    {
        return repo.empty();
    }

  