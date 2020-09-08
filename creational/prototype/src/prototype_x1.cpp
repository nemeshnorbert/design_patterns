#include <iostream>
#include <memory>

#include "prototype_x1.h"

PrototypeX1::~PrototypeX1()
{

}

void PrototypeX1::Operation()
{
    std::cout << "PrototypeX1::Operation()\n";
}

void PrototypeX1::Configure(int param1)
{

}

std::shared_ptr<AbstractPrototypeX> PrototypeX1::Clone()
{
    return std::make_shared<PrototypeX1>();
}
