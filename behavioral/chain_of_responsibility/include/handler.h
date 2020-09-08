#ifndef CHAIN_OF_RESPONSIBILITY_HANDLER_H_
#define CHAIN_OF_RESPONSIBILITY_HANDLER_H_

#include <memory>

#include "request.h"

class Handler
{
public:
    void SetSuccessor(std::shared_ptr<Handler> successor);

    std::shared_ptr<Handler> GetSuccessor();

    virtual void HandleRequest(Request request) = 0;

    virtual ~Handler();

private:
    std::shared_ptr<Handler> successor_;
};


#endif
