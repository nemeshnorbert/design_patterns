#ifndef ABSTRACT_FACTORY_FACTORY_B_H_
#define ABSTRACT_FACTORY_FACTORY_B_H_

#include "abstract_product_x.h"
#include "abstract_product_y.h"
#include "abstract_factory.h"

class FactoryB : public AbstractFactory
{
public:
    std::shared_ptr<AbstractProductX> CreateProductX() override;

    std::shared_ptr<AbstractProductY> CreateProductY() override;

    virtual ~FactoryB();
};

#endif
