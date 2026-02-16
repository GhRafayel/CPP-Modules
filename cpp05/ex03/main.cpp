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
#include "Intern.hpp"


int main(void)
{
	std::srand(std::time(0));

	// AForm * r = new RobotomyRequestForm("Bender");   
	// AForm * s = new ShrubberyCreationForm("Bender"); 
	// AForm * p = new PresidentialPardonForm("Bender"); 

	Intern intern;

	AForm * r;
	AForm * s;
	AForm * p;
	AForm * f;

	try
	{
		r = intern.makeForm("robotomy request", "Bender");
		s = intern.makeForm("shrubbery creation", "Bender");
	
		p = intern.makeForm("presidential pardon", "Bender");
		f = intern.makeForm("wrong name", "Bender");
	
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
	delete f;

	return (0);
}