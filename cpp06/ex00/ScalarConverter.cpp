/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 13:54:56 by rghazary          #+#    #+#             */
/*   Updated: 2025/09/19 13:54:57 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter() {}


void ScalarConverter::convert(std::string & str)
{
	char *		end = NULL;
	bool		val = false;
	double 		doubleVal;
	float		floatVal;
	long int	intVal;
	int			charVal;

	if (str.length() > 1) str = to_trim(str);

	if (str.length() == 1 && !std::isdigit(str[0]) && !std::isalpha(str[0]))
	{
		std::cout << "Error: invalid input > " << str << std::endl;
		return ;
	}
    if (str == "nan" || str == "nanf" ||  str == "+inf" || str == "-inf" || str == "+inff" || str == "-inff") {
		val = true;
	}
	else if (str.length() > 1)
	{
		std::strtod(str.c_str(), &end);

		if ((*end != '\0' && *end != 'f') || (*end == 'f' && *(end + 1) != '\0'))
		{
			std::cout << "Error: invalid input > " << str << std::endl;
			return;
		}
	}
	if (str.length() == 1 && std::isalpha(str[0]))
		doubleVal = static_cast<double>(str[0]);
	else
		doubleVal = static_cast<double>(std::strtod(str.c_str(), NULL));

	floatVal = static_cast<float>(doubleVal);
	intVal = static_cast<long int>(doubleVal);
	charVal = static_cast<int>(doubleVal);
	
	if (charVal >= 128 || charVal < 0 ||  val)
		std::cout << "char:	impossible" << std::endl;
	else if (charVal < 32 || charVal == 127)
		std::cout << "char:	Non displayable" << std::endl;
	else
	{
		char chr = static_cast<char>(charVal);
		if (chr == 32)
			std::cout << "char: ' ' " <<  std::endl;
		else
			std::cout << "char:	" << chr <<  std::endl;
	}
		
	if (intVal > 2147483647 || intVal < -2147483648 || val)
		std::cout << "int:	impossible" << std::endl;
	else
		std::cout << "int:	" << intVal <<  std::endl;

	std::cout << std::fixed << std::setprecision(6);
	std::cout << "float:	" << floatVal << "f" << std::endl;
	std::cout << "double:	" <<  doubleVal << std::endl;

}
