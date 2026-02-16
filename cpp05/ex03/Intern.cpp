#include "Intern.hpp"

Intern::~Intern() {}

Intern::Intern() {}

AForm * Intern::make_robotomy(const std::string & target) {
   return new RobotomyRequestForm(target);
}

AForm * Intern::make_shrubbery(const std::string & target) {
    return new ShrubberyCreationForm(target);
}

AForm * Intern::make_presidential(const std::string & target) {
    return new PresidentialPardonForm(target); 
}

AForm * Intern::call_massage(const std::string & target) {
    (void)target;
    std::cout << "Error: the name already exists." << std::endl;
    return NULL;
}

AForm * Intern::makeForm(const std::string & name, const std::string & target)
{
    std::string array[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    
    AForm * (Intern::*fun_ref[4])(const std::string & target) = 
	{
        &Intern::make_presidential,
        &Intern::make_robotomy,
        &Intern::make_shrubbery,
        &Intern::call_massage
    };
    int i = 0;
    while (i < 3 && name != array[i])
        i++;
    return (this->*fun_ref[i])(target);
}
