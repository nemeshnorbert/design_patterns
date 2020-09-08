#ifndef MEDIATOR_CONCRETE_COLLEAGUE_B_H_
#define MEDIATOR_CONCRETE_COLLEAGUE_B_H_

#include "message.h"
#include "colleague.h"
#include "mediator.h"

class ConcreteColleagueB : public Colleague
{
public:
    ConcreteColleagueB(std::shared_ptr<Mediator> mediator);

    void Send(const Message& message);

    void Notify(const Message& message);

    virtual ~ConcreteColleagueB();
};


#endif
