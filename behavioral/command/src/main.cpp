#include <memory>

#include "command.h"
#include "concrete_command.h"
#include "invoker.h"

int main(int argc, char** argv)
{
    auto invoker = std::make_shared<Invoker>();
    auto reciever = std::make_shared<Reciever>();
    std::shared_ptr<Command> command = std::make_shared<ConcreteCommand>(reciever);

    invoker->StoreCommand(command);
    invoker->ExecuteCommand();

    return 0;
}

