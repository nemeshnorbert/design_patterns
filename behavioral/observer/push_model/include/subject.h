#ifndef OBSERVER_PUSH_MODEL_SUBJECT_H_
#define OBSERVER_PUSH_MODEL_SUBJECT_H_

#include <memory>
#include <string>
#include <map>

#include "state.h"
#include "observer.h"

class Subject
{
public:
    void Attach(std::shared_ptr<Observer> observer);

    void Detach(std::shared_ptr<Observer> observer);

    void Notify();

    virtual ~Subject();

protected:
    virtual const State& GetState() const = 0;

private:
    std::map<std::string, std::shared_ptr<Observer>> observers_;
};


#endif
