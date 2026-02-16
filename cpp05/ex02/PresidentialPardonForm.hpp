#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class  PresidentialPardonForm : public AForm
{
	private:
		const std::string _target;
	public:
		~PresidentialPardonForm();
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &);
		PresidentialPardonForm(const PresidentialPardonForm &);

		PresidentialPardonForm & operator = (const PresidentialPardonForm &);
	
		std::string	getTarget(void) const;
		void		tobeExecutedd(const Bureaucrat &) const;
};

#endif