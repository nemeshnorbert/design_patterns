#include <memory>
#include <iostream>

#include "implementor.h"
#include "proxy.h"

Proxy::~Proxy()
{

}

void Proxy::Operation()
{
    if (implementor_ == nullptr)
    {
        implementor_ = std::make_shared<Implementor>();
    }
    std::cout << "Proxy::Operation()\n\t";
    implementor_->Operation();
}
