/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 10:42:47 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/08 10:42:48 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    private :
        Weapon    * weapon;
        std::string name;
    public :
        HumanB(std::string name);
        ~HumanB(void);
        void    attack(void);
        void    setWeapon(Weapon  & club);
};
