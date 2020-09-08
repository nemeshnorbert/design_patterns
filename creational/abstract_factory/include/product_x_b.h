#ifndef ABSTRACT_FACTORY_PRODUCT_XB_H_
#define ABSTRACT_FACTORY_PRODUCT_XB_H_

#include "abstract_product_x.h"

class ProductXB : public AbstractProductX
{
public:
    void Operation() override;

    virtual ~ProductXB();
};


#endif
