/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:58:09 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/28 15:58:10 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap(void)
{
	std::cout << "\033[31m" << "ScavTrap " << this->name << " Destructor called"  << "\033[0m" << std::endl;
}

ScavTrap::ScavTrap(void) : ClapTrap()
{
    this->attack_damage = 20;
    this->energy_points = 50;
    this->hit_points = 100;
    this->name = "	";
	std::cout << "\033[33m" << "ScavTrap " << this->name << " Default constructor called" << "\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const std::string & name) : ClapTrap(name)
{
    this->attack_damage = 20;
    this->energy_points = 50;
    this->hit_points = 100;
	std::cout << "\033[33m" << "ScavTrap " << this->name << " Parameterize constructor called" << "\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & obj) : ClapTrap(obj)
{
	std::cout << "\033[33m" << "ScavTrap " << this->name << " Copy constructor called" << "\033[0m" << std::endl;
}

ScavTrap & ScavTrap::operator = (const ScavTrap & obj)
{
    if (this != & obj)
    {
        ClapTrap::operator=(obj);
    }
	std::cout << "\033[34m" << "ScavTrap " << this->name <<" Copy assignment operator called"  << "\033[0m" << std::endl;
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << " is now in Gate keeper mode\n" << std::endl;
}
