#include "component.h"

void Component::ProcessPrototypes(int paramX1, int paramY1, int paramY2)
{
    auto objectX = factory_->CreatePrototypeX(paramX1);
    auto objectY = factory_->CreatePrototypeY(paramY1, paramY2);
    objectX->Operation();
    objectY->Action();
}

Component::Component(std::shared_ptr<AbstractPrototypeFactory> customFactory)
    : factory_{customFactory}
{

}
