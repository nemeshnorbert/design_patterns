#ifndef ITERATOR_ABSTRACT_CONTAINER_H_
#define ITERATOR_ABSTRACT_CONTAINER_H_

#include <memory>

#include "AbstractIterator.h"

template <typename T>
class AbstractContainer
{
public:
    virtual std::shared_ptr<AbstractIterator<T>> CreateIterator() = 0;

    virtual ~AbstractContainer()
    {}
};


#endif