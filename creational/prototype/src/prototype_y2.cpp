#include <iostream>

#include "prototype_y2.h"

PrototypeY2::~PrototypeY2()
{

}

void PrototypeY2::Action()
{
    std::cout << "PrototypeY2::Action()\n";
}

void PrototypeY2::Configure(int param1, int param2)
{

}

std::shared_ptr<AbstractPrototypeY> PrototypeY2::Clone()
{
    return std::make_shared<PrototypeY2>();
}
