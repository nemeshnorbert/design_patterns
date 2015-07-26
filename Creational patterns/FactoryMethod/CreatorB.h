#ifndef FACTORY_METHOD_CREATOR_B_H_
#define FACTORY_METHOD_CREATOR_B_H_

#include "AbstractCreator.h"

class CreatorB : public AbstractCreator
{
public:
    virtual std::shared_ptr<AbstractProduct> CreateProduct();

    virtual ~CreatorB();
};


#endif