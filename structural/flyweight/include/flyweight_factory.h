#ifndef FLYWEIGHT_FLYWEIGHT_FACTORY_H_
#define FLYWEIGHT_FLYWEIGHT_FACTORY_H_

#include <memory>
#include <string>
#include <unordered_map>

#include "concrete_flyweight_a.h"
#include "concrete_flyweight_b.h"

class FlyweightFactory
{
public:
    std::shared_ptr<Flyweight> GetFlyweightA(const std::string& id);

    std::shared_ptr<Flyweight> GetFlyweightB(const std::string& id);

private:
    std::unordered_map<std::string, std::shared_ptr<ConcreteFlyweightA>> poolA_;
    std::unordered_map<std::string, std::shared_ptr<ConcreteFlyweightB>> poolB_;
};


#endif
