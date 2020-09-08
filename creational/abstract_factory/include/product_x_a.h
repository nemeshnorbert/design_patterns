#ifndef ABSTRACT_FACTORY_PRODUCT_XA_H_
#define ABSTRACT_FACTORY_PRODUCT_XA_H_

#include "abstract_product_x.h"

class ProductXA : public AbstractProductX
{
public:
    void Operation() override;

    virtual ~ProductXA();
};


#endif
