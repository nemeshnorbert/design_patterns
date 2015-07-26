#include "stdafx.h"

#include <memory>

#include "Adapter.h"
#include "TargetInterface.h"
#include "Client.h"

void Client::Method()
{
    std::shared_ptr<TargetInterface> adaptor = std::make_shared<Adapter>();
    adaptor->Action(1);
}
