#ifndef VISITOR_OBJECT_STRUCTURE_H_
#define VISITOR_OBJECT_STRUCTURE_H_

#include <map>
#include <string>

class Element;
class Visitor;

class ObjectStructure
{
public:
    void Add(Element* element);

    void Remove(Element* element);

    void Accept(Visitor* visitor);

private:
    std::map<std::string, Element*> elements_;
};


#endif


