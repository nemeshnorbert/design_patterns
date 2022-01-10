#include "composite.h"

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
    auto it = nodes_.find(component->Id());
    if (it != nodes_.end())
    {
        auto message = std::string{"component with id "}
            + component->Id() + std::string{"already exists"};
        throw std::runtime_error(message);
    }
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
