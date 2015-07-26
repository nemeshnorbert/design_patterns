#include "stdafx.h"

#include "Flyweight.h"
#include "FlyweightFactory.h"

std::shared_ptr<Flyweight> FlyweightFactory::GetFlyweightB(const std::string& id)
{
    auto iflyweight = poolB_.find(id);
    if (iflyweight == poolB_.end())
    {
        auto result = poolB_.insert({ id, std::make_shared<ConcreteFlyweightB>() });
        return result.first->second;
    }
    return iflyweight->second;
}

std::shared_ptr<Flyweight> FlyweightFactory::GetFlyweightA(const std::string& id)
{
    auto iflyweight = poolA_.find(id);
    if (iflyweight == poolA_.end())
    {
        auto result = poolA_.insert({ id, std::make_shared<ConcreteFlyweightA>() });
        return result.first->second;
    }
    return iflyweight->second;
}
