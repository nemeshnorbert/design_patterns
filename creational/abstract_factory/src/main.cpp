#include <memory>

#include "abstract_product_x.h"
#include "abstract_product_y.h"
#include "abstract_factory.h"
#include "factory_a.h"
#include "factory_b.h"

int main(int argc, char** argv)
{
    std::shared_ptr<AbstractFactory> factory = std::make_shared<FactoryB>();
    std::shared_ptr<AbstractProductX> productX = factory->CreateProductX();
    std::shared_ptr<AbstractProductY> productY = factory->CreateProductY();
    productX->Operation();
    productY->Operation();
    return 0;
}

