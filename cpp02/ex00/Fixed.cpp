/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 16:05:37 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/08 16:05:39 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = obj.getRawBits();
}

Fixed &Fixed::operator=(const Fixed & obj)
{
	std::cout << "Copy assignment operator calle" << std::endl;
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
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(const int raw)
{
	this->_value = raw;
	std::cout << "setRawBits member function called" << std::endl;
}
