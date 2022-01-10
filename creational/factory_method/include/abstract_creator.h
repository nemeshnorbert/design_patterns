#ifndef FACTORY_METHOD_ABSTRACT_CREATOR_H_
#define FACTORY_METHOD_ABSTRACT_CREATOR_H_

#include <memory>

#include "abstract_product.h"

class AbstractCreator
{
public:
    virtual std::shared_ptr<AbstractProduct> CreateProduct() = 0;

    virtual ~AbstractCreator();
};


#endif
