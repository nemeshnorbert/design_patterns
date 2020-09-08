#include <iostream>


#include "element_a.h"
#include "visitor.h"

ElementA::ElementA(const std::string& name)
    : Element(name)
{

}

ElementA::~ElementA()
{

}

void ElementA::OperationA()
{
    std::cout << "ElementA::OperationA()\n";
}

void ElementA::Accept(Visitor* visitor)
{
    visitor->VisitElementA(this);
}
