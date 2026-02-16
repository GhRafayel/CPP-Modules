/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:10:16 by rghazary          #+#    #+#             */
/*   Updated: 2025/08/01 17:10:17 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void)
{
    std::string str = "HI THIS IS BRAIN";

    std::string *pnt = &str;

    std::string &ref = str;

    std::cout << &str << std::endl;
    std::cout << &pnt << std::endl;
    std::cout << &ref << std::endl;

    std::cout << str << std::endl;
    std::cout << *pnt << std::endl;
    std::cout << ref << std::endl;
    return (0);
}
