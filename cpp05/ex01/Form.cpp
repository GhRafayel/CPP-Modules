/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:19:59 by rghazary          #+#    #+#             */
/*   Updated: 2025/09/10 16:20:03 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::~Form() {}

Form::Form() : _name("Form"), _grade_sign(10), _grade_execute(10), _val(false) { }

Form::Form(const std::string & name, int arg1, int arg2) :
    _name(name), 
    _grade_sign(arg1),
    _grade_execute(arg2),
    _val(false)
{
    Form_monitoring(' ');
}

Form::Form (const Form & obj)  :
    _name(obj._name), 
    _grade_sign(obj._grade_sign), 
    _grade_execute(obj._grade_execute),
    _val(obj._val) {}

Form & Form::operator = (const Form & obj)
{
	if (this != & obj) this->_val = obj._val;
    return *this;
}

std::string Form::getName(void) const {
    return this->_name;
}

bool    Form::getVal(void) const {
    return this->_val;
}

int         Form::getGradeSign(void) const {
    return this->_grade_sign;
}

int Form::getGradeExecute(void) const {
    return this->_grade_execute;
}

bool    Form::beSigned(Bureaucrat & obj) {

    if (obj.getGrade() <= this->_grade_sign) 
    {
        this->_val = true;
        return true;
    }
    return false;
}

const char * Form::GradeTooHighException::what()  const throw () {
    return "Grade is too high!";
}

const char * Form::GradeTooLowException::what() const throw () {
    return "Grade is too low!";
}

void    Form::Form_monitoring(char chr) const {
	if (getGradeExecute() > 150 || getGradeSign() > 150 || (chr == '+' && getGradeSign() + 1 > 150))
        throw GradeTooLowException();
    else if (getGradeExecute() < 1 || getGradeSign() < 1 || (chr == '-' && getGradeSign() - 1 < 1))
        throw GradeTooHighException();
}

std::ostream & operator << (std::ostream & os, const Form & obj) {
    os << obj.getName() << " " << obj.getGradeSign() << " " << obj.getGradeExecute() << (obj.getVal() ? " true" : " false") << std::endl;
    return os;
}

