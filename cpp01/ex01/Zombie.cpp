/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zobmie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 14:13:52 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/01 14:13:53 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	
};

Zombie::Zombie(std::string new_name)
{
	name = new_name;
};

Zombie::~Zombie(void)
{
	std::cout << name << " is destroyed" << std::endl;
};

void Zombie::announce(void)
{
	std::cout << name << std::endl;
};
