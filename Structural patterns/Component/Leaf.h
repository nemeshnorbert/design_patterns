#ifndef COMPONENT_LEAF_H_
#define COMPONENT_LEAF_H_

#include "Component.h"

class Leaf : public Component
{
public:
    Leaf(const std::string& name);

    virtual void Operation() override;

    virtual void Add(std::shared_ptr<Component> component) override;

    virtual void Remove(const std::string& id) override;

    virtual std::shared_ptr<Component> GetChild(const std::string& id) override;

    virtual ~Leaf();
};


#endif