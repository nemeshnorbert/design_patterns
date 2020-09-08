#include "element.h"

Element::Element(const std::string& name)
    : name_(name)
{

}

const std::string& Element::Name() const
{
    return name_;
}

Element::~Element()
{

}
