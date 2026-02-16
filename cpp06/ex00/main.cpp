/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 13:53:44 by rghazary          #+#    #+#             */
/*   Updated: 2025/09/19 13:53:45 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

std::string to_trim(std::string & str)
{
	int	start = 0;
	int	end   = str.length() - 1;

	while (str[start] && (str[start] == ' ' || str[start] == '\t'))
		start++;
	while (str[end] && (str[end] == ' ' || str[end] == '\t'))
		end--;
	return (str.substr(start, end - start + 1));
}

int main(int argc, char ** argv)
{
	if (argc == 1)
	{
		std::cout << "Error: invalid input" << std::endl;
		return 0;
	}
	for (int i = 1; argv[i]; i++)
	{
		std::string str = argv[i];
		std::cout << "-------------Input = " << str << " test " <<  i << "--------------" << std::endl;
		ScalarConverter::convert(str);
	}
	return 0;
}