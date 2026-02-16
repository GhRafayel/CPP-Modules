/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:02:28 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/28 16:02:30 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[31m" << "DiamondTrap " << this->name << " Destructor called"  << "\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap() :
	ClapTrap(),
	FragTrap(),
	ScavTrap(),
	name("	")
{
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
   	std::cout << "\033[33m" << "DiamondTrap " << this->name << " Default constructor called" << "\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string & name) :
	ClapTrap(name + "_clap_name"),
	FragTrap(name),
	ScavTrap(name),
	name(name)
{
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "\033[33m" << "DiamondTrap " << this->name << " Parameterize constructor called" << "\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & obj) :
	ClapTrap(obj),
	FragTrap(obj),
	ScavTrap(obj)
{
	std::cout << "\033[33m" << "DiamondTrap " << this->name << " Copy constructor called" << "\033[0m" << std::endl;
}

DiamondTrap & DiamondTrap::operator = (const DiamondTrap & obj)
{
    if (this != & obj)
    {
        ClapTrap::operator = (obj);
        FragTrap::operator = (obj);
        ScavTrap::operator = (obj);
    }
	std::cout << "\033[34m" << "DiamondTrap " << this->name <<" Copy assignment operator called" << "\033[0m" << std::endl;
    return *this;
}

void    DiamondTrap::whoAmI()
{
    std::cout << this->name << std::endl << ClapTrap::name <<  std::endl;
}

