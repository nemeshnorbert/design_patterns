#include <memory>

#include "concrete_class_a.h"
#include "concrete_class_b.h"

int main(int argc, char** argv)
{
    auto object = std::make_shared<ConcreteClassB>();

    object->TemplateMethod();

	return 0;
}

