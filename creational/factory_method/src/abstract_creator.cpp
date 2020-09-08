#include "abstract_creator.h"

AbstractCreator::~AbstractCreator()
{

}

void AbstractCreator::Action()
{
    auto product = CreateProduct();
    // do something with product
    product->Operation();
}
