/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 14:32:25 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/08 14:32:27 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        Harl harlFilter(argv[1]);
    }
    else
        std::cout << "Error: One argument is required" << std::endl;
    return (0);
}