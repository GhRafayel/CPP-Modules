/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 14:22:51 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/08 14:22:54 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <sstream>
#include <iostream>
Harl::Harl(void) {} 

Harl::~Harl(void){} 

void Harl::debug(void)
{
	std::cout << "DEBUG level: " << std::endl;
}

void Harl::info(void)
{
	std::cout << "INGO level: " << std::endl;
}

void Harl::warning(void)
{
	std::cout << "WARNING level: " << std::endl;
}

void Harl::error(void)
{
	std::cout << "ERROR level: " << std::endl;
}

void Harl::defaul(void)
{
	std::cout << "";
}

void	Harl::complain(std::string level)
{
	std::string fun_name[5] = {"debug", "info", "warning", "error", "hello"};
	void (Harl::*fun_ref[5])(void) = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
		&Harl::defaul
	};
	int i = 0;
	while (i < 5 && level != fun_name[i])
		i++;
	(this->*fun_ref[i])();
}
