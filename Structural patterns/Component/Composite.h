#ifndef COMPONENT_COMPOSITE_H_
#define COMPONENT_COMPOSITE_H_

#include <unordered_map>

#include "Component.h"

class Composite : public Component
{
public:
    Composite(const std::string& name);

    virtual void Operation() override;

    virtual void Add(std::shared_ptr<Component> component) override;

    virtual void Remove(const std::string& id) override;

    virtual std::shared_ptr<Component> GetChild(const std::string& id) override;

    virtual ~Composite();

private:
    std::unordered_map<std::string, std::shared_ptr<Component>> nodes_;
};

#endif