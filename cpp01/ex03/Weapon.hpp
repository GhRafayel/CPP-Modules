/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 10:43:28 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/08 10:43:29 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private :
        std::string type;
    public :
        Weapon(std::string type);
        Weapon(void);
        ~Weapon();
       const std::string &  getType(void) const;
       void                 setType(std::string new_type);   
};

#endif
