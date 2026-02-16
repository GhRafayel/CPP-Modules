/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:56:06 by rghazary          #+#    #+#             */
/*   Updated: 2025/07/30 13:56:07 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	//std::cout << "PhoneBook constraction " <<  std::endl;
	value = true;
};
PhoneBook::~PhoneBook()
{
	//std::cout << std::endl << "PhoneBook distraction" << std::endl;
};
void	search_index(PhoneBook phonebook)
{
	std::string	input;
	int			i = 0;

	std::cout << "Write contact index > ";
 	if (!std::getline(std::cin, input))
		return;
	std::cout << std::endl;
	i = input[0] - 48;
	if (input[1] || i < 1 || i > 8 || phonebook.contacts[i - 1].value == false)
	{
		std::cout << "Invalid index — no contact found" << std::endl;
		return ;
	}
	i--;
	phonebook.contacts[i].drow(true);
}

void    PhoneBook::search(PhoneBook phonebook, int index)
{
	if (phonebook.value && index == -1)
	{
		std::cout << "Empty Phonebook" << std::endl;
		return;
	}
	if (!phonebook.value) index = 7;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index|First name| Last name| Nike name|" << std::endl;

	for (int i = 0; i <= index; i++)
	{
		std::cout << "|         " << i + 1 << "|";
		phonebook.contacts[i].drow(false);
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	search_index(phonebook);
};

void	PhoneBook::add(Contact *contact_item)
{
	contact_item->get_string();
}
