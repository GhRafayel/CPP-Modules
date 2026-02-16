/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:01:28 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/28 16:01:30 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        void    attack(const std::string & name);
        virtual ~ScavTrap(void);
        ScavTrap(void);
        ScavTrap(const std::string & name);
        ScavTrap(const ScavTrap & obj);

        ScavTrap & operator = (const ScavTrap & obj);

        void    guardGate();
};

#endif

