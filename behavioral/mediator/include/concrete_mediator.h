#ifndef MEDIATOR_CONCRETE_MEDIATOR_H_
#define MEDIATOR_CONCRETE_MEDIATOR_H_

#include "message.h"
#include "concrete_colleague_a.h"
#include "concrete_colleague_b.h"
#include "mediator.h"

class ConcreteMediator : public Mediator
{
public:
    virtual void Send(const Message message, std::shared_ptr<Colleague> colleague) override;

    std::shared_ptr<ConcreteColleagueA> GetCollegueA() const;

    void SetCollegueA(std::shared_ptr<ConcreteColleagueA> collegueA);

    std::shared_ptr<ConcreteColleagueB> GetCollegueB() const;

    void SetCollegueB(std::shared_ptr<ConcreteColleagueB> collegueB);

    virtual ~ConcreteMediator();

private:
    std::shared_ptr<ConcreteColleagueA> collegueA_;
    std::shared_ptr<ConcreteColleagueB> collegueB_;

};


#endif
