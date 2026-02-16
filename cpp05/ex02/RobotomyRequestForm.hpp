#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"

class  RobotomyRequestForm : public AForm
{
	private:
		const std::string _target;
	public:
		~RobotomyRequestForm();
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &);
		RobotomyRequestForm(const RobotomyRequestForm &);

		RobotomyRequestForm & operator = (const RobotomyRequestForm &);
	
		class GetRobotomizedFailed : public std::exception {
			public:
				const char * what() const throw ();
		};

		void		tobeExecutedd(const Bureaucrat &) const;
		std::string	getTarget(void) const;
};

#endif