/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:54:56 by rghazary          #+#    #+#             */
/*   Updated: 2025/07/30 13:54:58 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	value = false;
	prompt[0] = "First name";
	prompt[1] = "Last name";
	prompt[2] = "Nick name";
	prompt[3] = "Phone number";
	prompt[4] = "Darkest secret";
};

Contact::~Contact()
{
	//std::cout << "Contact distraction" << std::endl;
};

void	print_str(std::string text)
{
	int count = 0;
	int j = 0;
	int i = 0;

	while (text[i] && count < 9)
	{
		unsigned char c = text[i];
		if (!(c & 0x80)) i += 1;
		else if ((c & 0xE0) == 0xC0) i += 2;
		else if ((c & 0xF0) == 0xE0) i += 3;
		else if ((c & 0xF8) == 0xF0) i += 4;
		count++;
		std::cout << text.substr(j, i - j);
		j = i;
	}
	std::cout << ".|";
}

void	print_contact_item(std::string text)
{
	std::string str = "                    ";
	int			len = 0;

	for (int i = 0; text[i];)
	{
		unsigned char c = text[i];
		if (!(c & 0x80)) i += 1;
		else if ((c & 0xE0) == 0xC0) i += 2;
		else if ((c & 0xF0) == 0xE0) i += 3;
		else if ((c & 0xF8) == 0xF0) i += 4;
		len++;
	}
	if (len > 9)
		print_str(text);
	else
		std::cout << str.substr(0, 10 - len) << text << "|";
}

void    Contact::drow(bool value)
{
	if (value)
	{
		for (int i = 0; i < 5; i++)
		{
			std::cout << prompt[i] << "	" << data[i] << std::endl;
		}
		return ;
	}
	for (int i = 0; i < 3; i++)
	{
		print_contact_item(this->data[i]);
	}
}

void    Contact::get_string()
{
	std::string res;

	for (int i = 0; i < 5;)
	{
		std::cout << "Write your " << "\033[31m" << this->prompt[i] << "\033[0m" << " > ";
		if (!std::getline(std::cin, res))
			return ;
		res = to_trim(res);
		if (check_string(res, i))
		{
			this->data[i] = res;
			i++;
		}
	}
	value = true;
};

bool Contact::check_string(std::string input, int index)
{
	if (!input[0])
		return (false);
	if (index == 3)
	{
		for (int i = 0; input[i]; i++)
		{
			if (input[i] < 48 || input[i] > 57)
			{
				std::cout << "\033[32m" << "  The phone number can be only digit" << "\033[0m" << std::endl;
				return (false);
			}
		}
		return (true);
	}
	else
	{
		for (int i = 0; input[i]; i++)
		{
			if (input[i] == 27)
				return (false);
		}
		for (int i = 0; input[i]; i++)
		{
			if (input[i] != 32 && input[i] != '\t')
				return (true);
		}
		std::cout << "\033[32m" << "  The input could't be empty    " << "\033[0m" << std::endl;
	}
	return (false);
}

