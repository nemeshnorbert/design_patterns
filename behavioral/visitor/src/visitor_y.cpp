#include <iostream>

#include "visitor_y.h"
#include "element_a.h"
#include "element_b.h"

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
