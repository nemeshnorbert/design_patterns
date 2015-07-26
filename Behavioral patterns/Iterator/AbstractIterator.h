#ifndef ITERATOR_ABSTRACT_ITERATOR_H_
#define ITERATOR_ABSTRACT_ITERATOR_H_

template <typename T>
class AbstractIterator
{
public:
    virtual void First() = 0;
    virtual void Next() = 0;
    virtual bool IsDone() = 0;
    virtual T& GetItem() = 0;
    virtual ~AbstractIterator()
    {}
};

#endif