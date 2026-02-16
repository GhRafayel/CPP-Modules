/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 14:14:16 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/01 14:14:17 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std::string s_name);
		~Zombie();
		void announce();
};

Zombie* zombieHorde(int N, std::string name);

#endif
