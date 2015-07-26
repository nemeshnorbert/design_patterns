#ifndef ABSTRACT_FACTORY_PRODUCT_XB_H_
#define ABSTRACT_FACTORY_PRODUCT_XB_H_

#include "AbstractProductX.h"

class ProductXB : public AbstractProductX
{
public:
    void Operation() override;

    virtual ~ProductXB();
};


#endif