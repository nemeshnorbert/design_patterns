#ifndef STRATEGY_CONTEXT_H_
#define STRATEGY_CONTEXT_H_

#include <memory>

#include "Strategy.h"

class Context
{
public:
    Context(std::shared_ptr<Strategy> strategy);

    void ContextInterface();

private:
    std::shared_ptr<Strategy> strategy_;
};


#endif