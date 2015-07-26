#ifndef ABSTRACT_FACTORY_FACTORY_B_H_
#define ABSTRACT_FACTORY_FACTORY_B_H_

#include "AbstractProductX.h"
#include "AbstractProductY.h"
#include "AbstractFactory.h"

class FactoryB : public AbstractFactory
{
public:
    std::shared_ptr<AbstractProductX> CreateProductX() override;

    std::shared_ptr<AbstractProductY> CreateProductY() override;

    virtual ~FactoryB();
};

#endif