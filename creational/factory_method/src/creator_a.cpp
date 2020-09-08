#include "product_a.h"
#include "creator_a.h"

CreatorA::~CreatorA()
{

}

std::shared_ptr<AbstractProduct> CreatorA::CreateProduct()
{
    return std::make_shared<ProductA>();
}
