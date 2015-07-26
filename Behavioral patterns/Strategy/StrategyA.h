#ifndef STRATEGY_STRATEGY_A_H_
#define STRATEGY_STRATEGY_A_H_

#include "Strategy.h"

class StrategyA : public Strategy
{
public:
    virtual void PerformAlgorithm();

    virtual ~StrategyA();
};


#endif