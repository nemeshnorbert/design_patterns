#ifndef ABSTRACT_FACTORY_FACTORY_A_H_
#define ABSTRACT_FACTORY_FACTORY_A_H_

#include "AbstractProductX.h"
#include "AbstractProductY.h"
#include "AbstractFactory.h"

class FactoryA : public AbstractFactory
{
public:
    std::shared_ptr<AbstractProductX> CreateProductX() override;

    std::shared_ptr<AbstractProductY> CreateProductY() override;

    virtual ~FactoryA();
};


#endif