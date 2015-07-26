#ifndef FACTORY_METHOD_PRODUCT_B_H_
#define FACTORY_METHOD_PRODUCT_B_H_

#include "AbstractProduct.h"

class ProductB : public AbstractProduct
{
public:
    virtual void Operation() override;

    virtual ~ProductB();
};

#endif