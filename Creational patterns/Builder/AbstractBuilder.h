#ifndef BUILDER_ABSTRACT_BUILDER_H_
#define BUILDER_ABSTRACT_BUILDER_H_

#include <memory>

#include "Product.h"

class AbstractBuilder
{
public:
    virtual void BuildPartX() = 0;
    virtual void BuildPartY() = 0;
    virtual void BuildPartZ() = 0;
    virtual std::shared_ptr<Product> GetProduct() = 0;

    virtual ~AbstractBuilder();
};


#endif