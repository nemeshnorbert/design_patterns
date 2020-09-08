#ifndef FACTORY_METHOD_CREATOR_A_H_
#define FACTORY_METHOD_CREATOR_A_H_

#include "abstract_creator.h"

class CreatorA : public AbstractCreator
{
    virtual std::shared_ptr<AbstractProduct> CreateProduct();

    virtual ~CreatorA();
};


#endif
