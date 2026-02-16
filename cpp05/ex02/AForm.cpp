/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:19:59 by rghazary          #+#    #+#             */
/*   Updated: 2025/09/10 16:20:03 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::~AForm() {}

AForm::AForm() : _name("AForm"), _grade_sign(10), _grade_execute(10), _val(false) { }

AForm::AForm(const std::string & name, int arg1, int arg2) :
    _name(name), 
    _grade_sign(arg1),
    _grade_execute(arg2),
    _val(false)
{
    AForm_monitoring(' ');
}

AForm::AForm (const AForm & obj)  :
    _name(obj._name), 
    _grade_sign(obj._grade_sign), 
    _grade_execute(obj._grade_execute),
    _val(obj._val) {}

AForm & AForm::operator = (const AForm & obj)
{
	if (this != & obj) this->_val = obj._val;
    return *this;
}

std::string AForm::getName(void) const {
    return this->_name;
}

bool    AForm::getVal(void) const {
    return this->_val;
}

int AForm::getGradeSign(void) const {
    return this->_grade_sign;
}

int AForm::getGradeExecute(void) const {
    return this->_grade_execute;
}

void    AForm::beSigned(Bureaucrat & obj) {

    if (obj.getGrade() <= this->getGradeSign()) {
        this->setValue();
        return ;
    }
    std::cout << obj.getName() << " couldn't sign " << getName();
	std::cout << " because Bureaucrat ";
    throw GradeTooLowException();
}

void AForm::execute(const Bureaucrat & executor) const
{
   if (!this->getVal())
   {
        std::cout << this->getName();
        throw FormSignedException();
   }
   if (executor.getGrade() > this->getGradeExecute())
   {
        std::cout << this->getName() << " form execute_";
        throw GradeTooHighException();
   }
}

void    AForm::setValue() {
    this->_val = true;
}

const char * AForm::FormSignedException::what() const throw ()
{
    return " form is not signed";
}

const char * AForm::GradeTooHighException::what()  const throw () {
    return "Grade is too high!";
}

const char * AForm::GradeTooLowException::what() const throw () {
    return "Grade is too low!";
}

void    AForm::AForm_monitoring(char chr) const {

	if (this->_grade_sign > 150 || (chr == '+' && this->_grade_sign + 1 > 150))
        throw GradeTooLowException();
    else if (this->_grade_sign < 1 || (chr == '-' && this->_grade_sign - 1 < 1))
        throw GradeTooHighException();
}

std::ostream & operator << (std::ostream & os, const AForm & obj) {
    os << obj.getName() << " " << obj.getGradeSign() << " " << obj.getGradeExecute() << " " << obj.getVal() << std::endl;
    return os;
}

