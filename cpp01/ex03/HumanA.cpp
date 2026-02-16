/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 10:42:28 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/08 10:42:30 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& club) : weapon(club) {

    std::cout  << " HumanA created" << std::endl;
    this->name = name;
};

HumanA::~HumanA(void)
{
    std::cout << name << " is distroed" << std::endl;
};

void HumanA::attack(void)
{
    std::cout << name << " attacks with their ";
    std::cout << weapon.getType() << std::endl;
};
