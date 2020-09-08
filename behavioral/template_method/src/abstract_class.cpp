#include <iostream>

#include "abstract_class.h"

AbstractClass::~AbstractClass()
{

}

void AbstractClass::TemplateMethod()
{
    std::cout << "AbstractClass::TemplateMethod():\n";
    FirstPrimitiveOperation();
    SecondPrimitiveOperation();
}
