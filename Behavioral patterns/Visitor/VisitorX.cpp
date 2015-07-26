#include "stdafx.h"
#include "VisitorX.h"

#include "ElementA.h"
#include "ElementB.h"

void VisitorX::VisitElementB(ElementB* elementB)
{
    std::cout << "VisitorX:";
    elementB->OperationB();
}

void VisitorX::VisitElementA(ElementA* elementA)
{
    std::cout << "VisitorX:";
    elementA->OperationA();
}

VisitorX::~VisitorX()
{

}

