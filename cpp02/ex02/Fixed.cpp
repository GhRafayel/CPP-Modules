#include "Fixed.hpp"

Fixed::~Fixed() {print_str("Distractor", 1);}

Fixed::Fixed() : _value(0) {print_str("Default", 1);}

Fixed::Fixed(const int val) : _value(val << this->_franctionalBits) {print_str("Int", 1);}

Fixed::Fixed(const float val) : _value(roundf(val * (1 << this->_franctionalBits))) {print_str("Float", 1);}

Fixed::Fixed(const Fixed & val) : _value(val._value) {{print_str("Copy", 1);}}

Fixed & Fixed::operator = (const Fixed & obj)
{
	print_str("Copy assignment", 2);
	if (this != &obj)  this->_value = obj._value;
	return *this;
}

bool Fixed::operator > (const Fixed & obj) const
{
	print_str("Comparison (>)", 2);
	return this->_value > obj._value;
}

bool Fixed::operator < (const Fixed & obj) const
{
	print_str("Comparison (<)", 2);
	return this->_value < obj._value;
}

bool Fixed::operator <= (const Fixed & obj) const
{
	print_str("Comparison (<=)", 2);
	return this->_value <= obj._value;
}

bool Fixed::operator >= (const Fixed & obj) const
{
	print_str("Comparison (>=)", 2);
	return this->_value >= obj._value;
}

bool Fixed::operator == (const Fixed & obj) const
{
	print_str("Comparison (==)", 2);
	return this->_value == obj._value;
}

bool Fixed::operator != (const Fixed & obj) const
{
	return this->_value != obj._value;
}

Fixed  Fixed::operator *(const Fixed & obj) const
{
	print_str("Arithmetic (*)", 2);
	Fixed res;
	long long temp = (long long)this->_value * (long long)obj._value;
	res.setRawBits((int)temp >> this->_franctionalBits);
	return res;
}

Fixed  Fixed::operator / (const Fixed & obj) const
{
	print_str("Arithmetic (/)", 2);
	if (obj._value == 0)
		throw std::runtime_error("ERROR");
	Fixed res;
	long long temp = ((long long)this->_value << this->_franctionalBits) / obj._value;
	res.setRawBits((int)temp);
	return res;
}

Fixed Fixed::operator - (const Fixed & obj) const
{
	print_str("Arithmetic (-)", 2);
	return Fixed(this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator + (const Fixed & obj) const
{
	print_str("Arithmetic (+)", 2);
	return Fixed(this->toFloat() + obj.toFloat());
}

Fixed & Fixed::operator ++ ()
{
	print_str("Pre-increment (++|)", 2);
	this->setRawBits(this->_value + 1);
	return *this;
}

Fixed  Fixed::operator ++ (int)
{
	print_str("Post-increment (|++)", 2);
	Fixed	temp(*this);
	this->setRawBits(this->_value + 1);
	return temp;
}

Fixed & Fixed::operator -- ()
{
	print_str("Pre-decrement (--|)", 2);
	this->setRawBits(this->_value - 1);
	return *this;
}

Fixed Fixed::operator -- (int)
{
	print_str("Post-decrement (|--)", 2);
	Fixed	temp(*this);
	this->_value -= 1;
	return temp;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "\033[34mSetRawBits member function called " <<  raw << "\033[0m" << std::endl;
	this->_value = raw;
}

int Fixed::getRawBits(void) const
{
	print_str("GetRawBits", 3);
	return this->_value;
}

float   Fixed::toFloat(void) const
{
	print_str("toFloat", 3);
	return static_cast<float> (this->_value) / (1 << this->_franctionalBits);
}

int Fixed::toInt(void) const
{
	print_str("toInt", 3);
	return this->_value >> this->_franctionalBits;
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	print_str("max", 3);
	return  (a > b) ? a : b;
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	print_str("min", 3);
	return  (a < b) ? a : b;
}

const Fixed & Fixed::min(const Fixed & a, const Fixed & b)
{
	print_str("const min", 3);
	return  (a < b) ? a : b;
}

const Fixed & Fixed::max(const Fixed & a, const Fixed & b)
{
	print_str("const max", 3);
	return  (a > b) ? a : b;
}

