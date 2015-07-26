#ifndef STRATEGY_STRATEGY_H_
#define STRATEGY_STRATEGY_H_

class Strategy
{
public:
    virtual void PerformAlgorithm() = 0;

    virtual ~Strategy();
};


#endif