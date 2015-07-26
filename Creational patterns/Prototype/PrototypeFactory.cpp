#include "stdafx.h"

#include "AbstractPrototypeX.h"
#include "AbstractPrototypeY.h"
#include "PrototypeFactory.h"

PrototypeFactory::~PrototypeFactory()
{

}

std::shared_ptr<AbstractPrototypeY> PrototypeFactory::CreatePrototypeY(int param1, int param2)
{
    auto cloneY = prototypeY_->Clone();
    cloneY->Configure(param1, param2);
    return cloneY;
}

std::shared_ptr<AbstractPrototypeX> PrototypeFactory::CreatePrototypeX(int param1)
{
    auto cloneX = prototypeX_->Clone();
    cloneX->Configure(param1);
    return cloneX;
}

PrototypeFactory::PrototypeFactory(std::shared_ptr<AbstractPrototypeX> prototypeX, 
    std::shared_ptr<AbstractPrototypeY> prototypeY) 
    : prototypeX_(prototypeX)
, prototypeY_(prototypeY)
{

}
