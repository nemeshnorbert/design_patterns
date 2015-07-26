// Visitor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <memory>

#include "ElementA.h"
#include "ElementB.h"
#include "VisitorX.h"
#include "VisitorY.h"
#include "ObjectStructure.h"

int _tmain(int argc, _TCHAR* argv[])
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

