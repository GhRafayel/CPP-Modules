#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm () {}

RobotomyRequestForm::RobotomyRequestForm() :
    AForm("_robotomy", 72, 45) { }

RobotomyRequestForm::RobotomyRequestForm(const std::string & target) :
    AForm(target + "_robotomy", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & obj) :
    AForm(obj) {}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm & obj)
{
    if (this != & obj)  AForm::operator = (obj);
    return *this;
}

const char *  RobotomyRequestForm::GetRobotomizedFailed::what() const throw () {
    return "robotomy failed";
}

std::string RobotomyRequestForm::getTarget(void) const {
    return this->_target;
}

void	RobotomyRequestForm::tobeExecutedd(const Bureaucrat & executor) const
{
	execute(executor);
    if (std::rand() % 2)
    {
        std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
    }
    else
        std::cout << this->getTarget() << " robotomy failed." << std::endl;
}
