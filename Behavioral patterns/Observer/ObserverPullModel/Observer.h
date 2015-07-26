#ifndef OBSERVER_PULL_MODEL_OBSERVER_H_
#define OBSERVER_PULL_MODEL_OBSERVER_H_

#include <string>

class Observer
{
public:
    Observer(const std::string& name);

    const std::string& Name() const;

    virtual void Update() = 0;

    virtual ~Observer();

private:
    const std::string name_;
};


#endif