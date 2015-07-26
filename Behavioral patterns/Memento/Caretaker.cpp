#include "stdafx.h"

#include <iostream>

#include "Caretaker.h"

void Caretaker::SetMemento(std::shared_ptr<Memento> memento)
{
    std::cout << "Memento acquired by caretaker\n";
    memento_ = memento;
}

std::shared_ptr<Memento> Caretaker::GetMemento() const
{
    return memento_;
}
