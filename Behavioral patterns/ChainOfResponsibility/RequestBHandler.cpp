#include "stdafx.h"

#include <iostream>

#include "RequestBHandler.h"

RequestBHandler::~RequestBHandler()
{

}

void RequestBHandler::HandleRequest(Request request)
{
    if (request == Request::B)
    {
        std::cout << "RequestBHandler::HandleRequest()\n";
    }
    else
    {
        std::cout << "Request pushed to the next hander\n";
        auto successor = GetSuccessor();
        if (successor != nullptr)
        {
            successor->HandleRequest(request);
        }
    }
}
