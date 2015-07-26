#ifndef MEDIATOR_CONCRETE_COLLEAGUE_A_H_
#define MEDIATOR_CONCRETE_COLLEAGUE_A_H_

#include "Message.h"
#include "Colleague.h"
#include "Mediator.h"

class ConcreteColleagueA : public Colleague
{
public:
    ConcreteColleagueA(std::shared_ptr<Mediator> mediator);

    void Send(const Message& message);

    void Notify(const Message& message);

    virtual ~ConcreteColleagueA();
};


#endif