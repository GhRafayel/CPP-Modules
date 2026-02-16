#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::~MutantStack () {}

template<typename T>
MutantStack<T>::MutantStack () : std::stack<T>() {}

template<typename T>
MutantStack<T>::MutantStack ( const MutantStack & obj) : std::stack<T>(obj) { }

template<typename T>
MutantStack<T> & MutantStack<T>::operator = (const MutantStack<T> & obj) {
    if (this != &obj) std::stack<T>::operator=(obj);
    return *this;
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void) { return this->c.begin(); }

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void) { return this->c.end(); }

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin(void) const { return this->begin(); }

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end(void) const { return this->end(); }


