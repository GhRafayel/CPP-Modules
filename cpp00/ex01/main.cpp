/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:55:59 by rghazary          #+#    #+#             */
/*   Updated: 2025/07/30 13:56:01 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	print_message()
{
	std::cout << std::endl;
	std::cout << " >>>>>>>>>>>>> ";
	std::cout << "\033[31mADD\033[0m ";
	std::cout << "\033[32mSEARCH\033[0m ";
	std::cout << "\033[33mEXIT\033[0m";
	std::cout << " <<<<<<<<<<<<<<" << std::endl;
}

std::string to_trim(std::string str)
{
	int	start = 0;
	int	end   = str.length() - 1;

	while (str[start] && (str[start] == ' ' || str[start] == '\t'))
		start++;
	while (str[end] && (str[end] == ' ' || str[end] == '\t'))
		end--;
	return (str.substr(start, end - start + 1));
}

int main ()
{
    PhoneBook	book;
	int			index = -1;
	std::string res;
    
	while (1)
	{
		print_message();
		if (!std::getline(std::cin, res))
			return (0);
		res = to_trim(res);
		if (res == "ADD")
		{
			if (index == 7)
			{
				book.value = false;
				index = -1;
			}
			book.add(&book.contacts[++index]);
		}
		else if (res == "SEARCH")
		{
			book.search(book, index);
		}
		else if (res == "EXIT")
			break ;
	}
    return (0);
}
