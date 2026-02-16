/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 11:15:38 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/01 11:15:39 by rghazary         ###   ########.fr       */
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
        Zombie (void);
        Zombie (std::string str_name);
        ~Zombie (void);
        void announce( void );
};

Zombie      *new_Zombie(std::string str_name);
void        randomChump(std::string ran_name);

#endif