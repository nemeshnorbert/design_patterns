#ifndef COMMAND_COMMAND_H_
#define COMMAND_COMMAND_H_

#include <memory>

#include "Reciever.h"

class Command
{
public:
    Command(std::shared_ptr<Reciever> reciever);

    virtual void Execute() = 0;

    virtual ~Command();

protected:
    std::shared_ptr<Reciever> reciever_;
};


#endif