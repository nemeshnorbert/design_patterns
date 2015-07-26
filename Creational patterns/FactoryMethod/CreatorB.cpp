#include "stdafx.h"

#include "ProductB.h"
#include "CreatorB.h"

CreatorB::~CreatorB()
{

}

std::shared_ptr<AbstractProduct> CreatorB::CreateProduct()
{
    return std::make_shared<ProductB>();
}
