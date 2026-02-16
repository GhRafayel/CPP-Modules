/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:20:36 by rghazary          #+#    #+#             */
/*   Updated: 2025/09/10 16:20:38 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const   std::string _name;
        const   int         _grade_sign;
        const   int         _grade_execute;
        bool                _val;
    public:
        ~Form();
         Form();
         Form(const std::string &, int, int);
         Form(const Form &);
         Form & operator = (const Form &);

        std::string getName(void) const;
        int         getGradeSign(void) const;
        int         getGradeExecute(void) const;
        bool        getVal(void) const;

        bool        beSigned(Bureaucrat &);
        void        Form_monitoring(char) const;

        class GradeTooHighException : public std::exception
        {
            public:
                const char * what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char * what() const throw();
        };
};

std::ostream & operator << (std::ostream &, const Form &);

#endif