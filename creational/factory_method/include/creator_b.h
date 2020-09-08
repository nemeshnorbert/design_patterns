#ifndef FACTORY_METHOD_CREATOR_B_H_
#define FACTORY_METHOD_CREATOR_B_H_

#include "abstract_creator.h"

class CreatorB : public AbstractCreator
{
public:
    virtual std::shared_ptr<AbstractProduct> CreateProduct();

    virtual ~CreatorB();
};


#endif
