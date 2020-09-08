#include "factory_a.h"
#include "factory_b.h"

int main(int argc, char** argv)
{
    auto factory = std::make_shared<FactoryB>();
    auto productX = factory->CreateProductX();
    auto productY = factory->CreateProductY();
    productX->Operation();
    productY->Operation();
    return 0;
}

