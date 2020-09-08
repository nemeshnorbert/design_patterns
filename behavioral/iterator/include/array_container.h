#ifndef ITERATOR_ARRAY_CONTAINER_H_
#define ITERATOR_ARRAY_CONTAINER_H_

#include <memory>

#include "abstract_container.h"
#include "array_iterator.h"

template <typename T>
class ArrayContainer : public AbstractContainer<T>, public std::enable_shared_from_this<ArrayContainer<T>>
{
public:
    ArrayContainer() : ArrayContainer<T>(DEFAULT_SIZE)
    {}

    ArrayContainer(size_t count) : AbstractContainer<T>(count, T())
    {}

    ArrayContainer(size_t count, const T& defaultValue)
        : data_(nullptr)
        , count_(0)
    {
        count_ = count;
        data_ = new T[count];
        for (size_t index = 0; index < count_; ++index)
        {
            data_[index] = defaultValue;
        }
    }

    const T& Get(size_t index) const
    {
        return data_[index];
    }

    T& Get(size_t index)
    {
        return data_[index];
    }

    size_t Count() const
    {
        return count_;
    }

    virtual std::shared_ptr<AbstractIterator<T>> CreateIterator() override
    {
        return std::make_shared<ArrayIterator<T>>(
            this->std::enable_shared_from_this<ArrayContainer<T>>::shared_from_this());
    }

    virtual ~ArrayContainer()
    {
        delete[] data_;
    }

private:
    T* data_;
    size_t count_;
    static const size_t DEFAULT_SIZE = 8;
};

#endif
