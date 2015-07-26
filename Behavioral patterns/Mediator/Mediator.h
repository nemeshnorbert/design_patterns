#ifndef MEDIATOR_MEDIATOR_H_
#define MEDIATOR_MEDIATOR_H_

#include <memory>

#include "Message.h"
#include "Colleague.h"

class Mediator
{
public:
    virtual void Send(const Message message, std::shared_ptr<Colleague> colleague) = 0;

    virtual ~Mediator();
};


#endif