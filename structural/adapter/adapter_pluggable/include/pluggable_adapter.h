#ifndef ADAPTER_PLUGGABLE_PLUGGABLE_ADAPTER_H_
#define ADAPTER_PLUGGABLE_PLUGGABLE_ADAPTER_H_

#include <functional>

#include "adaptee_a.h"
#include "adaptee_b.h"

class PluggableAdapter
{
public:
    PluggableAdapter(std::shared_ptr<AdapteeA> adapteeA);

    PluggableAdapter(std::shared_ptr<AdapteeB> adapteeB);

    void Action(int param1);

private:
    std::function<void(int)> delegate_;
};


#endif
