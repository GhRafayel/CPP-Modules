/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 11:15:33 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/01 11:15:34 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    name = "Foo";
    announce();
}

Zombie::Zombie(std::string str_name)
{
    name = str_name;
}
Zombie::~Zombie(void)
{
   std::cout << name << " is destroyed" << std::endl;
}
void Zombie::announce( void )
{
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl; 
};
