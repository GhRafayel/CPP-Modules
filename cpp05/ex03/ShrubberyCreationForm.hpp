#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <fstream>

class  ShrubberyCreationForm : public AForm
{
    private:
        const std::string _target;
    public:
        ~ShrubberyCreationForm();
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string &);
        ShrubberyCreationForm(const ShrubberyCreationForm &);

        ShrubberyCreationForm & operator = (const ShrubberyCreationForm &);

		void		tobeExecutedd(const Bureaucrat &) const;
        std::string	getTarget(void) const;
};

#endif