/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 10:45:07 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/08 10:45:08 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main (int argc, char **argv)
{
	if (argc == 4)
	{
		Replace data(argv);

		data.read_file();
		data.replace_string();
		data.create_new_file();
	}
	else
		std::cout << "Error: At least 3 arguments are required." << std::endl;
	return (0);
}
