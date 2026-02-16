/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 10:43:23 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/08 10:43:24 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
    std::cout << " Weapon created" << std::endl;
};
Weapon::Weapon(std::string type)
{
    std::cout << " Weapon created" << std::endl;
    setType(type);
};
Weapon::~Weapon(void)
{
    std::cout << type << " Weapon is distracted" << std::endl;
};
const std::string & Weapon::getType(void) const
{
    return type;
};

void Weapon::setType(std::string new_type)
{
    type = new_type;
};

