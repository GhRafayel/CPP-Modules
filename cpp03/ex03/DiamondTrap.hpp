/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:02:34 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/28 16:02:36 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual  public FragTrap , virtual   public  ScavTrap
{
    private:
        std::string name;   
    public:
        ~DiamondTrap();
        DiamondTrap();
        DiamondTrap(const std::string & name);
        DiamondTrap(const DiamondTrap & obj);
        DiamondTrap & operator = (const DiamondTrap & obj);
        
        void    whoAmI();
};

#endif

