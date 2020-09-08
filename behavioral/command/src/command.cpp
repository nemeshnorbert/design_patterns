#include "command.h"

Command::~Command()
{

}

Command::Command(std::shared_ptr<Reciever> reciever) : reciever_(reciever)
{

}
