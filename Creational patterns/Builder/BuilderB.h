#ifndef BUILDER_BUILDER_B_H_
#define BUILDER_BUILDER_B_H_

#include "Product.h"
#include "AbstractBuilder.h"

class BuilderB : public AbstractBuilder
{
public:
    BuilderB();

    void BuildPartX() override;

    void BuildPartY() override;

    void BuildPartZ() override;

    std::shared_ptr<Product> GetProduct() override;

    virtual ~BuilderB();

private:
    std::shared_ptr<Product> product_;
};


#endif