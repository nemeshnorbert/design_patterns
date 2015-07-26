#ifndef FACTORY_METHOD_ABSTRACT_PRODUCT_H_
#define FACTORY_METHOD_ABSTRACT_PRODUCT_H_

class AbstractProduct
{
public:
    virtual void Operation() = 0;

    virtual ~AbstractProduct();
};


#endif