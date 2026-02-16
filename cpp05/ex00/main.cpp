/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:00:11 by rghazary          #+#    #+#             */
/*   Updated: 2025/09/09 15:00:13 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat * pnt;

    try {
        pnt = new Bureaucrat("pnt", 157);
    }
    catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
    
    std::cout << "======================================" << std::endl;
        std::cout << pnt->getGrade() << std::endl;
    std::cout << "======================================" << std::endl;

    std::cout << "------------------------test 1---------------------" << std::endl;
    try
    {
        Bureaucrat A1("Vienna42 A1", 1);
        std::cout << A1;
        
        Bureaucrat A2("Vienna42 A150", 150);
        std::cout << A2;

        Bureaucrat A3("Vienna42 A5", 5);
        std::cout << A3;

    }
    catch(const std::exception& e) { std::cerr << e.what() << std::endl; }


    std::cout << "------------------------test 2---------------------" << std::endl;
    try
    {
        Bureaucrat A1("Vienna42 A1", -1);
        std::cout << "Should not print this line" << std::endl;
    }
    catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

    std::cout << "------------------------test 3---------------------" << std::endl;
    try
    {
        Bureaucrat A1("Vienna42 151", 151);
        std::cout << "Should not print this line" << std::endl;
    }
    catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

    std::cout << "------------------------test 4---------------------" << std::endl;
    try
    {
        Bureaucrat A1("Vienna42 A1", 1);
        std::cout << A1;
        for (int i = 0; i < 149; i++) A1.decrement();
        std::cout << A1;
        A1.decrement();
        std::cout << "Should not print this line" << std::endl;
    }
    catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

    return (0);
}