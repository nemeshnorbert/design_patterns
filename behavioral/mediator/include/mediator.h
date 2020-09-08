#ifndef MEDIATOR_MEDIATOR_H_
#define MEDIATOR_MEDIATOR_H_

#include <memory>

#include "message.h"
#include "colleague.h"

class Mediator
{
public:
    virtual void Send(const Message message, std::shared_ptr<Colleague> colleague) = 0;

    virtual ~Mediator();
};


#endif
