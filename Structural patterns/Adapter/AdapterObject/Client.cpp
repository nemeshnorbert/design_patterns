#include "stdafx.h"

#include <memory>

#include "TargetInterface.h"
#include "Adapter.h"
#include "Client.h"

void Client::Method()
{
    std::shared_ptr<TargetInterface> adaptor = std::make_shared<Adapter>();
    adaptor->Action(1);
}
