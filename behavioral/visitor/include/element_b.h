#ifndef VISITOR_ELEMENT_B_H_
#define VISITOR_ELEMENT_B_H_

#include <string>

#include "element.h"

class ElementB : public Element
{
public:
    ElementB(const std::string& name);

    virtual void Accept(Visitor* visitor) override;

    void OperationB();

    virtual ~ElementB();
};

#endif


