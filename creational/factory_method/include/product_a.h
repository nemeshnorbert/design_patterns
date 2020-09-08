#ifndef FACTORY_METHOD_PRODUCT_A_H_
#define FACTORY_METHOD_PRODUCT_A_H_

#include "abstract_product.h"

class ProductA : public AbstractProduct
{
public:
    virtual void Operation() override;

    virtual ~ProductA();
};


#endif
