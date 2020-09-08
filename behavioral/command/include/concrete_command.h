#ifndef COMMAND_CONCRETE_COMMAND_H_
#define COMMAND_CONCRETE_COMMAND_H_

#include "command.h"

class ConcreteCommand : public Command
{
public:
    ConcreteCommand(std::shared_ptr<Reciever> reciever);

    virtual void Execute() override;

    virtual ~ConcreteCommand();
};


#endif
