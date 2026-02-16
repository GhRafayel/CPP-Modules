/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 13:54:04 by rghazary          #+#    #+#             */
/*   Updated: 2025/09/19 13:54:05 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP 
#define SCALARCONVERTER_HPP 

#include <iostream>
#include <iomanip>
#include <cstdlib>

class ScalarConverter
{
	private:
		~ScalarConverter();
		ScalarConverter();
		ScalarConverter(const ScalarConverter &);
		ScalarConverter & operator = (const ScalarConverter &);
	public:
		static void convert(std::string &);
};

std::string to_trim(std::string & str);

#endif