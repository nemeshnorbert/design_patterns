#include "stdafx.h"
#include "Handler.h"

Handler::~Handler()
{

}

std::shared_ptr<Handler> Handler::GetSuccessor()
{
    return successor_;
}

void Handler::SetSuccessor(std::shared_ptr<Handler> successor)
{
    successor_ = successor;
}
