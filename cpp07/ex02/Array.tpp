
#include "Array.hpp"

template<typename T>
Array<T>::~Array() {  delete []_data;}

template<typename T>
Array<T>::Array() : _data(new T [0]()), _lenght(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : _data (new T [n]()), _lenght(n) {}

template<typename T>
Array<T>::Array(const Array & obj)
{
    this->_data = new T [obj.size()]();
    this->_lenght = obj.size();
    for (size_t i = 0; i < this->size(); i++)
    {
        this->_data[i] = obj._data[i];
    }
}

template<typename T>
Array<T> & Array<T>::operator = (const Array & obj)
{
    if (this != & obj)
    {
        delete [] _data;
        this->_data = new T [obj.size()]();
        this->_lenght = obj.size();
        for (size_t i = 0; i < this->size(); i++)
        {
            this->_data[i] = obj._data[i];
        }
    }
    return *this;
}

template<typename T>
T & Array<T>::operator [](size_t index)
{
    if (index >= size())
        throw std::out_of_range("Index is out of bounds");
    return _data[index];
}

template<typename T>
const T & Array<T>::operator [](size_t index) const 
{
    if (index >= size())
        throw std::out_of_range("Index is out of bounds");
    return _data[index];
}

template<typename T>
size_t Array<T>::size(void) const {
    return this->_lenght;
}
