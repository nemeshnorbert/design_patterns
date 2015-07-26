#ifndef DECORATOR_COMPONENT_H_
#define DECORATOR_COMPONENT_H_

class Component
{
public:
    virtual void Operation() = 0;

    virtual ~Component();
};


#endif