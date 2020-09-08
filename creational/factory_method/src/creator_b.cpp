#include "product_b.h"
#include "creator_b.h"

CreatorB::~CreatorB()
{

}

std::shared_ptr<AbstractProduct> CreatorB::CreateProduct()
{
    return std::make_shared<ProductB>();
}
