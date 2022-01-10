#include "director.h"

std::shared_ptr<Product> Director::GetProduct()
{
    builder_->BuildPartY();
    builder_->BuildPartZ();
    builder_->BuildPartX();

    return builder_->GetProduct();
}

Director::Director(std::shared_ptr<AbstractBuilder> builder)
    : builder_{builder}
{

}
