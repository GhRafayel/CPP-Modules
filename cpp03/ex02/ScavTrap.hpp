/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:59:38 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/28 15:59:39 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ~ScavTrap(void);
        ScavTrap(void);
        ScavTrap(const std::string & name);
        ScavTrap(const ScavTrap & obj);

        ScavTrap & operator = (const ScavTrap & obj);

        void    guardGate();
};

#endif

