#include <iostream>

#include "builder_b.h"

BuilderB::~BuilderB()
{

}

std::shared_ptr<Product> BuilderB::GetProduct()
{
    return product_;
}

void BuilderB::BuildPartZ()
{
    std::cout << "BuilderB::BuildPartZ\n";
}

void BuilderB::BuildPartY()
{
    std::cout << "BuilderB::BuildPartY\n";
}

void BuilderB::BuildPartX()
{
    std::cout << "BuilderB::BuildPartX\n";
}

BuilderB::BuilderB()
    : product_{std::make_shared<Product>()}
{

}
