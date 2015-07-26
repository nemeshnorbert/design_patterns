#include "stdafx.h"

#include <iostream>
#include "PrototypeX2.h"

PrototypeX2::~PrototypeX2()
{

}

void PrototypeX2::Operation()
{
    std::cout << "PrototypeX2::Operation()\n";
}

void PrototypeX2::Configure(int param1)
{

}

std::shared_ptr<AbstractPrototypeX> PrototypeX2::Clone()
{
    return std::make_shared<PrototypeX2>();
}
