#include "stdafx.h"

#include <iostream>

#include "Originator.h"

void Originator::AcquireMemento(std::shared_ptr<Memento> memento)
{
    std::cout << "Memento acquired by originator\n";
    state_ = memento->GetState();
}

std::shared_ptr<Memento> Originator::CreateMemento()
{
    std::cout << "Memento created\n";
    return std::make_shared<Memento>(state_);
}

Originator::Originator(int data) : state_(std::make_shared<State>(data))
{

}
