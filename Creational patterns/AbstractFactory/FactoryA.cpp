#include "stdafx.h"

#include "ProductXA.h"
#include "ProductYA.h"
#include "FactoryA.h"

FactoryA::~FactoryA()
{

}

std::shared_ptr<AbstractProductY> FactoryA::CreateProductY()
{
    return std::make_shared<ProductYA>();
}

std::shared_ptr<AbstractProductX> FactoryA::CreateProductX()
{
    return std::make_shared<ProductXA>();
}
