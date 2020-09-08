#ifndef ABSTRACT_FACTORY_PRODUCT_YA_H_
#define ABSTRACT_FACTORY_PRODUCT_YA_H_

#include "abstract_product_y.h"

class ProductYA : public AbstractProductY
{
public:
    void Operation() override;

    virtual ~ProductYA();
};

#endif
