#ifndef PROTOTYPE_PROTOTYPE_FACTORY_H_
#define PROTOTYPE_PROTOTYPE_FACTORY_H_

#include "abstract_prototype_x.h"
#include "abstract_prototype_y.h"
#include "abstract_prototype_factory.h"

class PrototypeFactory : public AbstractPrototypeFactory
{
public:
    PrototypeFactory(std::shared_ptr<AbstractPrototypeX> prototypeX,
        std::shared_ptr<AbstractPrototypeY> prototypeY);

    virtual std::shared_ptr<AbstractPrototypeX> CreatePrototypeX(int param1) override;

    virtual std::shared_ptr<AbstractPrototypeY> CreatePrototypeY(int param1, int param2) override;

    virtual ~PrototypeFactory();

private:
    std::shared_ptr<AbstractPrototypeX> prototypeX_;
    std::shared_ptr<AbstractPrototypeY> prototypeY_;
};

#endif
