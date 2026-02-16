/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:01:16 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/28 16:01:17 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	public:
		~ClapTrap(void);

		ClapTrap(void);

		ClapTrap(const std::string & name);
		
		ClapTrap(const ClapTrap & obj);

		ClapTrap & operator = (const ClapTrap & obj);

		void			attack(const std::string & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		
		void			hit_increase(unsigned int amount);
		void			hit_decrease(unsigned int amount);
		void			energy_decrease(void);
		
	protected:
		int				hit_points;
		int				energy_points;
		int				attack_damage;
		std::string		name;
};

#endif
