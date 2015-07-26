#ifndef CHAIN_OF_RESPONSIBILITY_REQUEST_A_HANDLER_H_
#define CHAIN_OF_RESPONSIBILITY_REQUEST_A_HANDLER_H_

#include "Handler.h"

class RequestAHandler : public Handler
{
public:
    virtual void HandleRequest(Request request) override;

    virtual ~RequestAHandler();
};


#endif