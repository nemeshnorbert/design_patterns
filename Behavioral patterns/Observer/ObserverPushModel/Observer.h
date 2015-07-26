#ifndef OBSERVER_PUSH_MODEL_OBSERVER_H_
#define OBSERVER_PUSH_MODEL_OBSERVER_H_

#include <string>

#include "State.h"

class Observer
{
public:
    Observer(const std::string& name);

    const std::string& Name() const;

    virtual void Update(const State& state) = 0;

    virtual ~Observer();

private:
    const std::string name_;
};


#endif