/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 16:05:23 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/08 16:05:25 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main ()
{
    Fixed a;

    Fixed b(a);

    Fixed c;

    c = b;

    std::cout << a.getRawBits() << std::endl;

    std::cout << b.getRawBits() << std::endl;
    
    std::cout << c.getRawBits() << std::endl;

    return (0);
}