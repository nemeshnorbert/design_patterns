#include <iostream>

#include "element.h"
#include "visitor.h"
#include "object_structure.h"


void ObjectStructure::Accept(Visitor* visitor)
{
    for (auto& nameElementPair : elements_)
    {
        nameElementPair.second->Accept(visitor);
    }
}

void ObjectStructure::Remove(Element* element)
{
    auto ielement = elements_.find(element->Name());
    if (ielement != elements_.end())
    {
        elements_.erase(ielement);
    }
}

void ObjectStructure::Add(Element* element)
{
    elements_[element->Name()] = element;
}
