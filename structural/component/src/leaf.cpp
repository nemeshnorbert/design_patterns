#include <iostream>

#include "leaf.h"

Leaf::~Leaf()
{

}

std::shared_ptr<Component> Leaf::GetChild(const std::string& id)
{
    throw std::logic_error("leaf objects don't have children");
}

void Leaf::Remove(const std::string& id)
{
    throw std::logic_error("There is no children for leaf objects");
}

void Leaf::Add(std::shared_ptr<Component> component)
{
    throw std::logic_error("impossible to add component to leaf object");
}

void Leaf::Operation()
{
    std::cout << "Leaf " << id << " accessed\n";
}

Leaf::Leaf(const std::string& name) : Component(name)
{

}
