#include "product_x_a.h"
#include "product_y_a.h"
#include "factory_a.h"

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
