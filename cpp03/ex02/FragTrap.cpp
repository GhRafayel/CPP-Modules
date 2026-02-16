/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:59:55 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/28 15:59:56 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
	std::cout << "\033[31m" << "FragTrap " << this->name << " Destructor called"  << "\033[0m" << std::endl;
}

FragTrap::FragTrap() : ClapTrap()
{
	this->attack_damage = 30;
	this->energy_points = 100;
	this->hit_points = 100;
	std::cout << "\033[33m" << "FragTrap " << this->name << " Default constructor called" << "\033[0m" << std::endl;
}

FragTrap::FragTrap(const std::string & name) : ClapTrap(name)
{
	this->attack_damage = 30;
	this->energy_points = 100;
	this->hit_points = 100;
	std::cout << "\033[33m" << "FragTrap " << this->name << " Parameterize constructor called" << "\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap & obj) : ClapTrap(obj)
{
	std::cout << "\033[33m" << "FragTrap " << this->name << " Copy constructor called" << "\033[0m" << std::endl;
}

FragTrap & FragTrap::operator = (const FragTrap & obj)
{
	if (this != &obj)
	{
		ClapTrap::operator=(obj);
	}
	std::cout << "\033[34m" << "FragTrap " << this->name <<" Copy assignment operator called" << "\033[0m" << std::endl;
	return *this;
}


void	FragTrap::highFivesGuys()
{
	std::cout << " ✋ Hey! Up for a high five? ✋" << std::endl;
}
