#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

class   Span
{
    private:
        std::vector<int>    array;
        size_t              possible_addition;
    public:
        ~Span();
         Span();
         Span(unsigned int);
         Span(const Span &);
         Span & operator = (const Span &);

        void   addNumber(int);
        void   addNumber(std::vector<int> &);

        int    shortestSpan();
        int    longestSpan();
};

#endif
