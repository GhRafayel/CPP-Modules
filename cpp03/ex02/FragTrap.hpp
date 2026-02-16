/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:59:59 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/28 16:00:00 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		~FragTrap();
		FragTrap();
		FragTrap(const std::string & name);
		FragTrap(const FragTrap & obj);
		FragTrap & operator = (const FragTrap & obj);

		void	highFivesGuys(void);

};

#endif
