/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:02:09 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/28 16:02:10 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		 int attack_damage;;
	public:
		virtual	~FragTrap();
		FragTrap();
		FragTrap(const std::string & name);
		FragTrap(const FragTrap & obj);
		FragTrap & operator = (const FragTrap & obj);

		void	highFivesGuys(void);

};

#endif
