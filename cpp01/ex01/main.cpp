/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 14:13:41 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/01 14:13:42 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
    int				n = 5;
    std::string		s_name = "Valod";
    Zombie			*pnt = zombieHorde(n, s_name);

    for (int i = 0; i < n; i++)
    {
        pnt[i].announce();
    }
    delete []pnt;
    return (0);
};