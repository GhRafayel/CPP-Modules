/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 14:32:40 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/08 14:32:41 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(char *str)
{
    std::string temp = str;
    lev_index = -1;

    level[0] = "DEBUG";
    level[1] = "INFO";
    level[2] = "WARNING";
    level[3] = "ERROR";

    message[0] = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!";
    message[1] = "I cannot believe adding extra bacon costs more money.";
    message[2] = "I think I deserve to have some extra bacon for free.";
    message[3] = "This is unacceptable! I want to speak to the manager now.";

    for (int i = 0; i < 4; i++)
    {
        if (level[i] == temp)
        {
            lev_index = i;
        }
    }
    write_message();
}

Harl::~Harl(void)
{

}

void Harl::write_message(void)
{
    switch (lev_index)
    {
        case 0:
            std::cout << "[ " << level[0] << " ]" << std::endl;
            std::cout << message[0] << std::endl;
        case 1 :
            std::cout << "[ " << level[1] << " ]" << std::endl;
            std::cout << message[1] << std::endl;
        case 2 :
            std::cout << "[ " << level[2] << " ]" << std::endl;
            std::cout << message[2] << std::endl;
        case 3:
            std::cout << "[ " << level[3] << " ]" << std::endl;
            std::cout << message[3] << std::endl; break;
        default :
            std::cout << "[ Probably complaining about insignificant problems ] " << std::endl;
    }
}