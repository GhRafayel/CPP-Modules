#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void)
{
    this->_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val)
{
    this->_value = val << this->_fractional_bits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float val)
{
    this->_value = roundf(val * (1 << _fractional_bits));
    std::cout << "Float constructor called" << std::endl;

}

Fixed::Fixed(const Fixed & obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = obj._value;
}

Fixed &Fixed::operator = (const Fixed & obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->_value = obj._value;
    }
    return (*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "GetRawBits member function called" << std::endl;
    return this->_value;
}

void    Fixed::setRawBits(const int rew)
{
    std::cout << "SetRawBits" <<  rew << std::endl;
    this->_value = rew;
}

float Fixed::toFloat(void) const
{
    return static_cast<float> (this->_value ) / (1 << this->_fractional_bits);
}

int Fixed::toInt(void) const
{
    return this->_value >> this->_fractional_bits;
}


