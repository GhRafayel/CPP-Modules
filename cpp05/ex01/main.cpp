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
#include "Form.hpp"

int main(void)
{
    std::cout << "----------------test 1 Form -----------------" << std::endl;
    try
    {
        Form a("a", 1, 5);
        std::cout << a;
    }
    catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
    std::cout << "----------------test 2 Form -----------------" << std::endl;
    try
    {
        Form a("a", 151, 10);
        std::cout << a;
    }
    catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
    
    std::cout << "----------------test 3 Form copy constructor -----------------" << std::endl;
    try
    {
        Form a("a", 5, 10);
        std::cout << a; 
        Form b(a);
        std::cout << b;
    }
    catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
    
    std::cout << "----------------test 4 Form copy operator -----------------" << std::endl;
    try
    {
        Form a("a", 5, 10);
        std::cout << a;
        Form b("b", 10, 20);
        std::cout << b;
        
        Bureaucrat B("Shef", 1);
        b.beSigned(B);

        a = b;
       
        std::cout << a;
    }
    catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
    std::cout << "----------------test 1 Form and Bureeaucrat -----------------" << std::endl;
    try
    {
        Form A1("A1 Form", 1, 10);
        Form A2("A2 Form", 2, 10);

        Bureaucrat Anahit("Anahit", 2);

        Bureaucrat Gladis("Gladis", 2);

        Anahit.signForm(A1);
        Anahit.signForm(A2);
        
        Anahit.increment();
        Anahit.signForm(A1);

        Gladis.signForm(A1);
        Gladis.signForm(A2);
        
    }
    catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

    return (0);
}