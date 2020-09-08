#ifndef VISTOR_VISITOR_H_
#define VISTOR_VISITOR_H_

class ElementA;
class ElementB;

class Visitor
{
public:
    virtual void VisitElementA(ElementA* elementA) = 0;

    virtual void VisitElementB(ElementB* elementB) = 0;

    virtual ~Visitor();
};

#endif



