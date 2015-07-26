#ifndef MEDIATOR_COLLEAGUE_H_
#define MEDIATOR_COLLEAGUE_H_

#include <memory>

class Mediator;

class Colleague : public std::enable_shared_from_this<Colleague>
{
public:
    Colleague(std::shared_ptr<Mediator> mediator);

    virtual ~Colleague();

protected:
    std::shared_ptr<Mediator> mediator_;
};


#endif


