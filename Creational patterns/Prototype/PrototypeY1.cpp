#include "stdafx.h"

#include <iostream>

#include "PrototypeY1.h"

PrototypeY1::~PrototypeY1()
{

}

void PrototypeY1::Action()
{
    std::cout << "PrototypeY1::Action()\n";
}

void PrototypeY1::Configure(int param1, int param2)
{

}

std::shared_ptr<AbstractPrototypeY> PrototypeY1::Clone()
{
    return std::make_shared<PrototypeY1>();
}
