#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template<typename T>
class	MutantStack : public std::stack<T> 
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		~MutantStack();
		MutantStack();
		MutantStack(const MutantStack &);
		MutantStack & operator = (const MutantStack &);

		const_iterator	begin(void) const;
		const_iterator	end(void) const;
		iterator		begin(void);
		iterator		end(void); 
};

#include "MutantStack.tpp"

#endif