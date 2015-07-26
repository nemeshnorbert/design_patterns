#ifndef ITERATOR_ARRAY_ITERATOR_H_
#define ITERATOR_ARRAY_ITERATOR_H_

#include "AbstractIterator.h"

template <typename T>
class ArrayContainer;

template <typename T>
class ArrayIterator : public AbstractIterator<T>
{
public:
    ArrayIterator(std::shared_ptr<ArrayContainer<T>> owner)
        : owner_(owner)
    {}

    virtual void First() override
    {
        index_ = 0;
    }

    virtual void Next() override
    {
        ++index_;
    }

    virtual bool IsDone() override
    {
        auto locked = owner_.lock();
        return index_ >= locked->Count();
    }

    virtual T& GetItem() override
    {
        auto locked = owner_.lock();
        return locked->Get(index_);
    }

    virtual ~ArrayIterator()
    {}

private:
    std::weak_ptr<ArrayContainer<T>> owner_;
    size_t index_;
};


#endif