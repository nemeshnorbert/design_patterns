// ChainOfResponsibility.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "RequestAHandler.h"
#include "RequestBHandler.h"

int main()
{
    auto handlerA = std::make_shared<RequestAHandler>();
    auto handlerB = std::make_shared<RequestBHandler>();

    handlerA->SetSuccessor(handlerB);

    handlerA->HandleRequest(Request::A);
    handlerA->HandleRequest(Request::B);

	return 0;
}

