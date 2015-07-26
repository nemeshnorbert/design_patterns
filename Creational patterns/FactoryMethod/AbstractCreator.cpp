#include "stdafx.h"
#include "AbstractCreator.h"

AbstractCreator::~AbstractCreator()
{

}

void AbstractCreator::Action()
{
    auto product = CreateProduct();
    // do something with product
    product->Operation();
}
