#ifndef CHAIN_OF_RESPONSIBILITY_REQUEST_B_HANDLER_H_
#define CHAIN_OF_RESPONSIBILITY_REQUEST_B_HANDLER_H_

#include "Handler.h"

class RequestBHandler : public Handler
{
public:
    virtual void HandleRequest(Request request) override;

    virtual ~RequestBHandler();
};


#endif