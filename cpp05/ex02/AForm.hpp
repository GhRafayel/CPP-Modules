/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:20:36 by rghazary          #+#    #+#             */
/*   Updated: 2025/09/10 16:20:38 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>

class Bureaucrat;

class AForm
{
    private:
        const   std::string _name;
        const   int         _grade_sign;
        const   int         _grade_execute;
        
        bool                _val;
    public:
        virtual ~AForm();
        AForm();
        AForm(const std::string &, int, int);
        AForm(const AForm &);
        AForm & operator = (const AForm &);

		virtual void	tobeExecutedd(const Bureaucrat &) const = 0;

        std::string	    getName(void)               const;
        bool		    getVal(void)                const;
        int			    getGradeSign(void)          const;
        int			    getGradeExecute(void)       const;

       
        void		    AForm_monitoring(char)      const;
        void		    execute(const Bureaucrat &) const;

        void		    setValue();
        void		    beSigned(Bureaucrat &);
        
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

        class  FormSignedException: public std::exception
        {
            public:
                const char * what() const throw();
        };
};

std::ostream & operator << (std::ostream &, const AForm &);

#endif
