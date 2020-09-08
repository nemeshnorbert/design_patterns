#include <iostream>

#include "implementor.h"

Implementor::~Implementor()
{

}

void Implementor::Operation()
{
    std::cout << "Implementor::Operation()\n";
}
