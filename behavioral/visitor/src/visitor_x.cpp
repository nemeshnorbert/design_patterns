#include "visitor_x.h"

#include "element_a.h"
#include "element_b.h"

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

