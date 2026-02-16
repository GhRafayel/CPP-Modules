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

    if (this->_grade > 150 || (chr == '+' && this->_grade + 1 > 150))
        throw GradeTooLowException();
    else if (this->_grade < 1 || (chr == '-' && this->_grade - 1 < 1))
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

void    Bureaucrat::executeForm(const AForm & form) const
{
    if (!form.getVal()){
        std::cout << getName() << " Bureaucrat can not execute this";
        throw AForm::FormSignedException();
    }
    if (this->getGrade() <= form.getGradeExecute())
    {
        form.tobeExecutedd(*this);
        std::cout << getName() << " executed " << form.getName() << " form" <<  std::endl;
        return ;
    }
    std::cout << getName() << " Bureaucrat can not execute this ";
    throw AForm::GradeTooLowException();
}

void	Bureaucrat::signForm(AForm & form)
{
    form.beSigned(*this);
	std::cout << this->getName() << " signed " << form.getName() << " form" <<  std::endl;
}