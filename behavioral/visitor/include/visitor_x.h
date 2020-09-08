#ifndef VISITOR_VISITOR_X_H_
#define VISITOR_VISITOR_X_H_

#include <iostream>
#include "visitor.h"

class ElementA;
class ElementB;

class VisitorX : public Visitor
{
public:
    virtual void VisitElementA(ElementA* elementA) override;

    virtual void VisitElementB(ElementB* elementB) override;

    virtual ~VisitorX();
};

#endif


