#include "abstraction.h"
#include "client.h"

void Client::Action()
{
    abstraction_->Operation();
}

Client::Client(std::shared_ptr<Abstraction> abstraction)
    : abstraction_{abstraction}
{

}

