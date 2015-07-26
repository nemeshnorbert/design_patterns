#include "stdafx.h"

#include "ProductA.h"
#include "CreatorA.h"

CreatorA::~CreatorA()
{

}

std::shared_ptr<AbstractProduct> CreatorA::CreateProduct()
{
    return std::make_shared<ProductA>();
}
