#include "stdafx.h"
#include "Abstraction.h"

Abstraction::~Abstraction()
{

}

void Abstraction::Operation()
{
    implementation_->OperationImp();
}

Abstraction::Abstraction(std::shared_ptr<Implementation> implementation) : implementation_(implementation)
{

}
