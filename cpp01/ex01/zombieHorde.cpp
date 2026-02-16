/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 14:14:26 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/01 14:14:28 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
	Zombie *horde = new Zombie[n];

	for (int i = 0; i < n; i++)
	{
		horde[i] = Zombie(name);
	}
	return (horde);
};