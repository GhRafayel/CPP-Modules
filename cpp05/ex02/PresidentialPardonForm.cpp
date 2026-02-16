#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm () {}

PresidentialPardonForm::PresidentialPardonForm() :
	AForm("_presidential", 25, 5), _target("no target") {
}

PresidentialPardonForm::PresidentialPardonForm(const std::string & target) :
	AForm(target + "_presidential", 25, 5), _target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & obj) :
	AForm(obj) {}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm & obj)
{
	if (this != & obj) AForm::operator = (obj);
	return *this;
}

std::string PresidentialPardonForm::getTarget(void) const {
	return this->_target;
}

void	PresidentialPardonForm::tobeExecutedd(const Bureaucrat & executor) const
{
	execute(executor);
	std::cout << this->getTarget() <<  " has been pardoned by Zaphod Beeblebrox." << std::endl;
}