#ifndef COMMAND_INVOKER_H_
#define COMMAND_INVOKER_H_

#include "command.h"

class Invoker
{
public:
    void StoreCommand(std::shared_ptr<Command> command);

    void ExecuteCommand();

private:
    std::shared_ptr<Command> command_;
};

#endif
