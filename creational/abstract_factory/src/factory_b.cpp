#include "product_x_b.h"
#include "product_y_b.h"
#include "factory_b.h"

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
