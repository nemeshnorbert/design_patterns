#ifndef MEMENTO_MEMENTO_H_
#define MEMENTO_MEMENTO_H_

#include <memory>
#include "State.h"

class Memento
{
public:
    Memento(std::shared_ptr<State> state);

    std::shared_ptr<State> GetState();

private:
    std::shared_ptr<State> state_;
};


#endif