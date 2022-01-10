#include <memory>

#include "abstract_prototype_factory.h"
#include "prototype_x1.h"
#include "prototype_x2.h"
#include "prototype_y1.h"
#include "prototype_y2.h"
#include "prototype_factory.h"
#include "component.h"

int main(int argc, char** argv)
{
    std::shared_ptr<AbstractPrototypeFactory> customFactory = std::make_shared<PrototypeFactory>(
        std::make_shared<PrototypeX1>(), std::make_shared<PrototypeY2>());

    auto component = Component{customFactory};
    component.ProcessPrototypes(1, 2, 3);

    return 0;
}

