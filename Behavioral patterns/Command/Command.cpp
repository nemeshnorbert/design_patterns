#include "stdafx.h"
#include "Command.h"

Command::~Command()
{

}

Command::Command(std::shared_ptr<Reciever> reciever) : reciever_(reciever)
{

}
