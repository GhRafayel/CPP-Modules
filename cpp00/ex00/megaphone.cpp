/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:00:06 by rghazary          #+#    #+#             */
/*   Updated: 2025/07/30 14:00:08 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main (int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; argv[i]; i++)
		{
			for (int j = 0; argv[i][j]; j++)
			{
				char c = toupper(argv[i][j]);
				std::cout << c;
			}
			std::cout << " ";
		}
	}
	else
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE";
	std::cout << std::endl;
	return (0);
}
