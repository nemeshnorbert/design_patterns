// Command.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "ConcreteCommand.h"
#include "Invoker.h"

int _tmain(int argc, _TCHAR* argv[])
{
    auto invoker = std::make_shared<Invoker>();
    auto reciever = std::make_shared<Reciever>();
    auto command = std::make_shared<ConcreteCommand>(reciever);

    invoker->StoreCommand(command);
    invoker->ExecuteCommand();

	return 0;
}

