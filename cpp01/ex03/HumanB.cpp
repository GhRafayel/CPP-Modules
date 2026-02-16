/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 10:42:52 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/08 10:42:54 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
};

HumanB::~HumanB(void)
{
    std::cout << name << " is distracted" << std::endl;
};
void HumanB::attack(void)
{
    std::cout << name << " attacks with their ";
    if (weapon)
    {
        std::cout << weapon->getType();
    }
    std::cout << std::endl;
};

void HumanB::setWeapon(Weapon & club) 
{
    this->weapon = &club;
};
