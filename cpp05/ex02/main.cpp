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
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int main(void)
{
	std::srand(std::time(0));

	std::cout << std::endl << "==========================================================" << std::endl;
	std::cout << "----------------test for PresidentialPardonForm -----------------" << std::endl; 
	try
	{
		Bureaucrat bur("Bur", 4);

		// PresidentialPardonForm President("President");
		// Bureaucrat bur("Bur", 6);
		// President.beSigned(bur);
		// President.execute(bur);
		// bur.increment();

		AForm * President = new PresidentialPardonForm("Valod");
		AForm * prsident2 = new PresidentialPardonForm("0000000000000000");

		std::cout << prsident2->getName() << std::endl;

		bur.signForm(*President);
		bur.executeForm(*President);
		
		President->beSigned(bur);
		President->tobeExecutedd(bur);

		delete President;
	}
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	std::cout << "----------------test for RobotomyRequestForm -----------------" << std::endl; 
	try
	{
		//Bureaucrat Bur("Bur", 1);
		Bureaucrat Bur("Bur", 2);
		//Bureaucrat Bur("Bur", 1);

		RobotomyRequestForm Robot("Robot");
		Robot.beSigned(Bur);
		for (int i = 0; i < 10; i++)
		{
			Robot.tobeExecutedd(Bur);
		}
	}
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

    std::cout << "----------------test for ShrubberyCreationForm -----------------" << std::endl;  //  145, 137
	try
	{
		//test_for_ShrubberyCreationForm();

		Bureaucrat Bur("Bur", 150);
		Bureaucrat bbbb("ddddddddddddddddddd", 150);

		ShrubberyCreationForm Robot("Robot");
		ShrubberyCreationForm g("ggggggggggggg");

		//Bur.signForm(Robot);

		bbbb.signForm(g);
		Robot.beSigned(Bur);

		Bur.executeForm(Robot);
	}
    catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	std::cout << "----------------test for leaks -----------------" << std::endl;  //  145, 137
	try
	{
		AForm * r = new RobotomyRequestForm("Bender");    //intern.makeForm("robotmy request", "Bender");
		AForm * s = new ShrubberyCreationForm("Bender");  //intern.makeForm("shrubbery creation", "Bender");
		AForm * p = new PresidentialPardonForm("Bender"); //intern.makeForm("presidential pardon", "Bender");

		try
		{
			Bureaucrat Rafayel("Rafayel", 1);
			Bureaucrat Anahit("Anahit", 2);
			Bureaucrat Hovhannes("Hovhannes", 150);
			
			Rafayel.signForm(*p);
			Rafayel.executeForm(*p);

			Anahit.signForm(*s);
			Anahit.executeForm(*s);

			Hovhannes.signForm(*r);
			Hovhannes.executeForm(*r);
		}
		catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
		delete p;
		delete s;
		delete r;
	}
	catch(const std::exception& e) { std::cerr << e.what(); }
	return (0);
}
