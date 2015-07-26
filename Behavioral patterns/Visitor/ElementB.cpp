#include "stdafx.h"

#include <iostream>


#include "ElementB.h"
#include "Visitor.h"

ElementB::ElementB(const std::string& name)
    : Element(name)
{}

ElementB::~ElementB()
{

}

void ElementB::OperationB()
{
    std::cout << "ElementA::OperationB()\n";
}

void ElementB::Accept(Visitor* visitor)
{
    visitor->VisitElementB(this);
}
