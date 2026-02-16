/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 10:42:37 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/08 10:42:38 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    private :
        Weapon  &   weapon;
        std::string name;
    public :
        HumanA(std::string name, Weapon& club);
        ~HumanA(void);
        void    attack(void);
};
