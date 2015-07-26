#include "stdafx.h"

#include <memory>

#include "PluggableAdapter.h"


void PluggableAdapter::Action(int param1)
{
    return delegate_(param1);
}

PluggableAdapter::PluggableAdapter(std::shared_ptr<AdapteeB> adapteeB)
{
    delegate_ = [adapteeB](int param1) -> void { adapteeB->Operation(param1, 'a'); };
}

PluggableAdapter::PluggableAdapter(std::shared_ptr<AdapteeA> adapteeA)
{
    delegate_ = [adapteeA](int param1) -> void { adapteeA->Operation(param1, 0); };
}
