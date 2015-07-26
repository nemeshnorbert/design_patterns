#include "stdafx.h"

#include <iostream>

#include "Implementor.h"

Implementor::~Implementor()
{

}

void Implementor::Operation()
{
    std::cout << "Implementor::Operation()\n";
}
