#include <memory>

#include "target_interface.h"
#include "adapter.h"
#include "client.h"

void Client::Method()
{
    std::shared_ptr<TargetInterface> adaptor = std::make_shared<Adapter>();
    adaptor->Action(1);
}
