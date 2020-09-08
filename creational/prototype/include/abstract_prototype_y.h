#ifndef PROTOTYPE_ABSTRACT_PROTOTYPE_Y_H_
#define PROTOTYPE_ABSTRACT_PROTOTYPE_Y_H_

#include <memory>

class AbstractPrototypeY
{
public:
    virtual std::shared_ptr<AbstractPrototypeY> Clone() = 0;

    virtual void Configure(int param1, int param2) = 0;

    virtual void Action() = 0;

    virtual ~AbstractPrototypeY();
};


#endif