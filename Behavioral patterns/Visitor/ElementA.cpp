#include "stdafx.h"

#include <iostream>


#include "ElementA.h"
#include "Visitor.h"

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
