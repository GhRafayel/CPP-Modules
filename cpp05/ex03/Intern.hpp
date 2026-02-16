#ifndef INTER_HPP
#define INTER_HPP

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
    private:
        AForm * make_robotomy(const std::string &);
        AForm * make_shrubbery(const std::string &);
        AForm * make_presidential(const std::string &);
        AForm * call_massage(const std::string &);
        Intern(const Intern &);
        Intern & operator = (const Intern &);
    public:
        ~Intern();
        Intern();
        AForm * makeForm(const std::string &, const std::string &);     
};

#endif
