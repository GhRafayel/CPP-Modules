/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 11:14:57 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/01 11:14:59 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
    Zombie zombie1;
    Zombie  *zombie2;
    try
    {
        zombie2 = new_Zombie("FOO");
    }
    catch(const std::exception& e)
    {
        std::cerr << "Memory error: " << e.what() << std::endl; 
        return (1);
    }
    randomChump("Rafayel");
    delete zombie2;
    return (0);
}
