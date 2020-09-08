#ifndef STRATEGY_STRATEGY_B_H_
#define STRATEGY_STRATEGY_B_H_

#include "strategy.h"

class StrategyB : public Strategy
{
public:
    virtual void PerformAlgorithm();

    virtual ~StrategyB();
};

#endif
