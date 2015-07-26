#include "stdafx.h"
#include "Composite.h"

Composite::~Composite()
{

}

std::shared_ptr<Component> Composite::GetChild(const std::string& id)
{
    auto icomponent = nodes_.find(id);
    if (icomponent != nodes_.end())
    {
        return icomponent->second;
    }
    else
    {
        throw std::invalid_argument("component with id:" + id + " not found");
    }
}

void Composite::Remove(const std::string& id)
{
    auto icomponent = nodes_.find(id);
    if (icomponent != nodes_.end())
    {
        nodes_.erase(icomponent);
    }
    else
    {
        throw std::invalid_argument("component with id:" + id + " not found");
    }
}

void Composite::Add(std::shared_ptr<Component> component)
{
    nodes_[component->Id()] = component;
}

void Composite::Operation()
{
    for (const auto& IdComponentPair : nodes_)
    {
        IdComponentPair.second->Operation();
    }
}

Composite::Composite(const std::string& name) : Component(name)
{

}
