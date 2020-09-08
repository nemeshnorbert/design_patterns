#include <memory>
#include <iostream>

#include "builder_a.h"
#include "builder_b.h"
#include "director.h"

int main(int argc, char** argv)
{
    Director foreman(std::make_shared<BuilderA>());
    auto product = foreman.GetProduct();
	return 0;
}

