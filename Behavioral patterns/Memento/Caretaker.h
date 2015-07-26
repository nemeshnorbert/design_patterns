#ifndef MEMENTO_CARETAKER_H_
#define MEMENTO_CARETAKER_H_

#include "Memento.h"

class Caretaker
{
public:
    std::shared_ptr<Memento> GetMemento() const;

    void SetMemento(std::shared_ptr<Memento> memento);

private:
    std::shared_ptr<Memento> memento_;
};


#endif