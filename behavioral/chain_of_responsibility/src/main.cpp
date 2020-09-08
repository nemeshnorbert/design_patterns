#include "request_a_handler.h"
#include "request_b_handler.h"

int main()
{
    auto handlerA = std::make_shared<RequestAHandler>();
    auto handlerB = std::make_shared<RequestBHandler>();

    handlerA->SetSuccessor(handlerB);

    handlerA->HandleRequest(Request::A);
    handlerA->HandleRequest(Request::B);

	return 0;
}

