#ifndef BRIDGE_CLIENT_H_
#define BRIDGE_CLIENT_H_

#include <memory>

#include "abstraction.h"

class Client
{
public:
    Client(std::shared_ptr<Abstraction> abstraction);

    void Action();

private:
    std::shared_ptr<Abstraction> abstraction_;
};


#endif

