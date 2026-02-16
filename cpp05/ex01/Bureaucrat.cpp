/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:58:45 by rghazary          #+#    #+#             */
/*   Updated: 2025/09/09 14:58:50 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(10) {}

Bureaucrat::Bureaucrat(const std::string & name, int val) : _name(name), _grade(val) {
    Bureaucrat_monitoring(' ');
}

Bureaucrat::Bureaucrat(const Bureaucrat & obj) : _name(obj._name), _grade(obj._grade)  { }

Bureaucrat & Bureaucrat::operator = (const Bureaucrat & obj) {
    if (this != & obj) this->_grade = obj._grade;
    return *this;
}

std::string Bureaucrat::getName(void) const {
    return this->_name;
}

void    Bureaucrat::increment(void) {
    Bureaucrat_monitoring('-');
    this->_grade--;
}

void    Bureaucrat::decrement(void) {
    Bureaucrat_monitoring('+');
    this->_grade++;
}

void    Bureaucrat::Bureaucrat_monitoring(char chr) {
    if (getGrade() > 150 || (chr == '+' && getGrade() + 1 > 150))
        throw GradeTooLowException();
    else if (getGrade() < 1 || (chr == '-' && getGrade() - 1 < 1))
        throw GradeTooHighException();
}

int Bureaucrat::getGrade(void) const {
    return this->_grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

std::ostream & operator<<(std::ostream & os, const Bureaucrat & obj)
{
    os << obj.getName() << " Bureaucrat grade   " << obj.getGrade() << std::endl;
    return os;
}

void	Bureaucrat::signForm(Form & form)
{
	if (form.beSigned(*this))
	{
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
		return ;
	}
	std::cout << getName() << " couldn't sign " << form.getName();
	std::cout << " because Bureaucrat grade is low than Form" << std::endl;
}