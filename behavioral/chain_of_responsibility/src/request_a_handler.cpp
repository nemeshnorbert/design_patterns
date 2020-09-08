#include <iostream>

#include "request_a_handler.h"

RequestAHandler::~RequestAHandler()
{

}

void RequestAHandler::HandleRequest(Request request)
{
    if (request == Request::A)
    {
        std::cout << "RequestAHandler::HandleRequest()\n";
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
