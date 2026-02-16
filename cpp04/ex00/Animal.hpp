#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Data.hpp"

class	Animal
{
	protected:
		std::string	type;
	public:
		virtual ~Animal();
		Animal();
		Animal(const Animal & obj);
		Animal	&	operator = (const Animal & obj);

		virtual	void		makeSound() const;
		virtual void		print(const int type, const std::string & color) const;
		virtual	std::string	getType() const;
};

#endif