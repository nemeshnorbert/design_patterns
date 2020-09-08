#ifndef VISITOR_ELEMENT_A_H_
#define VISITOR_ELEMENT_A_H_

#include <string>

#include "element.h"

class ElementA : public Element
{
public:
    ElementA(const std::string& name);

    virtual void Accept(Visitor* visitor) override;

    void OperationA();

    virtual ~ElementA();
};

#endif


