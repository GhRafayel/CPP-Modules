#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void    print_item(T pnt)
{
	std::cout << pnt;
}

template<typename T> 
void increment(T & x) {
	x = x + 1;
}

template<typename T> 
void iter(T * pnt, size_t len, void (*f)(T &))
{
	for (size_t i = 0; i < len; i++)
	{
		f(pnt[i]);
	}
}

template<typename T, typename Fun> 

void iter(T * pnt, size_t len, Fun f)
{
	for (size_t i = 0; i < len; i++)
	{
		f(pnt[i]);
	}
}
#endif