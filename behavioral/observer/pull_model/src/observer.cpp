#include "observer.h"

Observer::~Observer()
{

}

const std::string& Observer::Name() const
{
    return name_;
}

Observer::Observer(const std::string& name) : name_(name)
{

}
