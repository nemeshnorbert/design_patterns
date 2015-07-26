#ifndef COMMAND_CONCRETE_COMMAND_H_
#define COMMAND_CONCRETE_COMMAND_H_

#include "Command.h"

class ConcreteCommand : public Command
{
public:
    ConcreteCommand(std::shared_ptr<Reciever> reciever);

    virtual void Execute() override;

    virtual ~ConcreteCommand();
};


#endif