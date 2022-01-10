#include <memory>

#include "abstract_creator.h"
#include "creator_a.h"
#include "creator_b.h"

int main(int argc, char** argv)
{
    std::shared_ptr<AbstractCreator> creator = std::make_shared<CreatorB>();
    std::shared_ptr<AbstractProduct> product = creator->CreateProduct();
    product->Operation();
    return 0;
}

