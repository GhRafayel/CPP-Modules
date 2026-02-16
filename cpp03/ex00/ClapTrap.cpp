/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:56:06 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/28 15:56:08 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap(void)
{
	std::cout << "\033[31m" << "ClapTrap " << this->name << " Destructor called"  << "\033[0m" << std::endl;
}

ClapTrap::ClapTrap(void) :
	hit_points(10), 
	energy_points(10), 
	attack_damage(0),
	name("	")
{
	std::cout << "\033[33m" << "ClapTrap " << this->name << " Default constructor called" << "\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const std::string & name) :
	hit_points(10),
	energy_points(10),
	attack_damage(0),
	name(name)
{
	std::cout << "\033[33m" << "ClapTrap " << this->name << " Parameterize constructor called" << "\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & obj) :
	hit_points(obj.hit_points),
	energy_points(obj.energy_points),
	attack_damage(obj.attack_damage),
	name(obj.name)
{
	std::cout << "\033[33m" << "ClapTrap " << this->name << " Copy constructor called" << "\033[0m" << std::endl;
}

ClapTrap & ClapTrap::operator = (const ClapTrap & obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->attack_damage = obj.attack_damage;
		this->energy_points = obj.energy_points;
		this->hit_points = obj.hit_points;
	}
	std::cout << "\033[34m" << "ClapTrap " << this->name <<" Copy assignment operator called";
	return *this;
}

void	ClapTrap::attack(const std::string & target)
{
	std::cout << "\033[95m";
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name <<  " can not attack to " << target <<  " it has " << this->energy_points << " health";
	}
	else if (this->energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " can not attack to " << target <<  " it has " << this->energy_points << " energy";
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!";
		energy_decrease();
	}
	 std::cout << "\033[0m" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	hit_decrease(amount);
	std::cout  << "\033[36m" << "ClapTrap  " << this->name << " takes " << amount << " damage!" << "\033[0m" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "\033[32m";
	if (this->hit_points == 0)
	{
		std::cout << "ClapTrap " << this->name << " has no hit points left to be repaired!";
	}
	else if (this->energy_points == 0)
	{
		std::cout << "ClapTrap " << this->name << " has no energy points left to be repaired!";
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " repaired for " << amount << " health!";
		hit_increase(amount);
		energy_decrease();
	}
	std::cout << "\033[0m" << std::endl;
}

void	ClapTrap::hit_decrease(unsigned int amount)
{
	this->hit_points -= amount;
	if (this->hit_points < 0) this->hit_points = 0;
}

void	ClapTrap::hit_increase(unsigned int amount)
{
	this->hit_points += amount;
}

void	ClapTrap::energy_decrease(void)
{
	this->energy_points -= 1;
	if (this->energy_points < 0) this->energy_points = 0;
}

