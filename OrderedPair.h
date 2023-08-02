#ifndef ORDEREDPAIR_H
#define ORDEREDPAIR_H

#include <iostream>
#include <exception>
#include <stdexcept>

namespace cs_pairs
{
    template <class T>
    class OrderedPair
    {
    public:
        class DuplicateMemberError : public std::exception
        {
        public:
            const char *what() const throw() override;
        };

        static const T DEFAULT_VALUE;

        OrderedPair(T newFirst = DEFAULT_VALUE, T newSecond = DEFAULT_VALUE);

        void setFirst(T newFirst);
        void setSecond(T newSecond);
        T getFirst();
        T getSecond();
        OrderedPair operator+(const OrderedPair &right);
        bool operator<(const OrderedPair &right);
        void print();

    private:
        T first;
        T second;
    };
}

#endif
