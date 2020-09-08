#ifndef PROXY_PROXY_H_
#define PROXY_PROXY_H_

#include <memory>

#include "interface.h"

// One of numerous applications of proxies - lazy initialization
class Proxy : public Interface
{
public:
    virtual void Operation() override;

    virtual ~Proxy();

private:
    std::shared_ptr<Interface> implementor_;
};

#endif


