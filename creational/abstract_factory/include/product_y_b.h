#ifndef ABSTRACT_FACTORY_PRODUCT_YB_H_
#define ABSTRACT_FACTORY_PRODUCT_YB_H_

#include "abstract_product_y.h"

class ProductYB : public AbstractProductY
{
public:
    void Operation() override;

    virtual ~ProductYB();
};


#endif
