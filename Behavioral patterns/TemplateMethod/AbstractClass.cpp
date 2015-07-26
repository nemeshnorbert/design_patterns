#include "stdafx.h"

#include <iostream>

#include "AbstractClass.h"

AbstractClass::~AbstractClass()
{

}

void AbstractClass::TemplateMethod()
{
    std::cout << "AbstractClass::TemplateMethod():\n";
    FirstPrimitiveOperation();
    SecondPrimitiveOperation();
}
