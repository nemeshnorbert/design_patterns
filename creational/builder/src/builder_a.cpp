#include <iostream>

#include "builder_a.h"

BuilderA::~BuilderA()
{

}

std::shared_ptr<Product> BuilderA::GetProduct()
{
    return product_;
}

void BuilderA::BuildPartZ()
{
    std::cout << "BuilderA::BuildPartZ()\n";
}

void BuilderA::BuildPartY()
{
    std::cout << "BuilderA::BuildPartY()\n";
}

void BuilderA::BuildPartX()
{
    std::cout << "BuilderA::BuildPartX()\n";
}

BuilderA::BuilderA()
    : product_{std::make_shared<Product>()}
{

}
