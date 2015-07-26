#ifndef COMPONENT_COMPONENT_H_
#define COMPONENT_COMPONENT_H_

#include <string>
#include <memory>

class Component
{
public:
    Component(const std::string& name);

    virtual void Operation() = 0;

    virtual void Add(std::shared_ptr<Component> component) = 0;

    virtual void Remove(const std::string& id) = 0;

    virtual std::shared_ptr<Component> GetChild(const std::string& id) = 0;

    const std::string& Id() const;

    virtual ~Component();

protected:
    std::string id;
};


#endif


