#ifndef ABSTRACT_FACTORY_ABSTRACT_FACTORY_H_
#define ABSTRACT_FACTORY_ABSTRACT_FACTORY_H_

#include <memory>

#include "AbstractProductX.h"
#include "AbstractProductY.h"

class AbstractFactory
{
public:
    virtual std::shared_ptr<AbstractProductX> CreateProductX() = 0;
    virtual std::shared_ptr<AbstractProductY> CreateProductY() = 0;

    virtual ~AbstractFactory();
};


#endif