#ifndef VISITOR_VISITOR_Y_H_
#define VISITOR_VISITOR_Y_H_

#include "visitor.h"

class VisitorY : public Visitor
{
public:
    virtual void VisitElementA(ElementA* elementA) override;

    virtual void VisitElementB(ElementB* elementB) override;

    virtual ~VisitorY();
};


#endif


