#include "stdafx.h"

#include <iostream>

#include "VisitorY.h"
#include "ElementA.h"
#include "ElementB.h"

VisitorY::~VisitorY()
{

}

void VisitorY::VisitElementB(ElementB* elementB)
{
    std::cout << "VisitorY:";
    elementB->OperationB();
}

void VisitorY::VisitElementA(ElementA* elementA)
{
    std::cout << "VisitorY:";
    elementA->OperationA();
}
