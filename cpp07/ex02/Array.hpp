#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>

class Array
{
    private:
        T *     _data;
        size_t  _lenght;
    public:
        ~Array();
         Array();
         Array(unsigned int);
         Array(const Array &);
         Array & operator = (const Array &);
         T & operator [] (size_t);
         const T &  operator [] (size_t) const;
      
         size_t size(void) const;
};

#include "Array.tpp"

#endif