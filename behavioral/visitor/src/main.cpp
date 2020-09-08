#include <memory>

#include "element_a.h"
#include "element_b.h"
#include "visitor_x.h"
#include "visitor_y.h"
#include "object_structure.h"

int main(int argc, char** argv)
{
    auto objects = std::make_shared<ObjectStructure>();
    auto elementA = std::make_shared<ElementA>("A");
    auto elementB = std::make_shared<ElementB>("B");

    auto visitorX = std::make_shared<VisitorX>();
    auto visitorY = std::make_shared<VisitorY>();

    objects->Add(elementA.get());
    objects->Add(elementB.get());

    objects->Accept(visitorX.get());
    objects->Accept(visitorY.get());

	return 0;
}

