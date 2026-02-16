/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 11:15:14 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/01 11:15:15 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie * new_Zombie(std::string str_name)
{
    Zombie  *zombie = new Zombie(str_name);
    return (zombie);
}
