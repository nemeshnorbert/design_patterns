#include "stdafx.h"

#include "ProductXB.h"
#include "ProductYB.h"
#include "FactoryB.h"

FactoryB::~FactoryB()
{

}

std::shared_ptr<AbstractProductY> FactoryB::CreateProductY()
{
    return std::make_shared<ProductYB>();
}

std::shared_ptr<AbstractProductX> FactoryB::CreateProductX()
{
    return std::make_shared<ProductXB>();
}
