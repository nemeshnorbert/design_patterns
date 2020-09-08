#ifndef VISITOR_ELEMENT_H_
#define VISITOR_ELEMENT_H_

#include <string>

class Visitor;

class Element
{
public:
    Element(const std::string& name);

    const std::string& Name() const;

    virtual void Accept(Visitor* visitor) = 0;

    virtual ~Element();

private:
    const std::string name_;
};

#endif