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
    implementor_->Operation();
    std::cout << "from Proxy";
}
