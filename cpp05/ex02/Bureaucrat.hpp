/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:58:57 by rghazary          #+#    #+#             */
/*   Updated: 2025/09/09 14:58:58 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string	_name;
        int					_grade;
	public:
		~Bureaucrat();
		Bureaucrat();
		Bureaucrat(const std::string &, int);
		Bureaucrat(const Bureaucrat &);

		Bureaucrat & operator = (const Bureaucrat &);

		std::string getName(void) const;
		int			getGrade(void) const;

		void		signForm(AForm &);
		void		increment(void);
		void		decrement(void);
		void		Bureaucrat_monitoring(char);
		void		executeForm(AForm const & form) const;

		class GradeTooHighException : public std::exception 
		{
			public:
				const char * what() const throw ();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char * what() const throw();
		};
};

std::ostream & operator << (std::ostream &, const Bureaucrat &);

#endif