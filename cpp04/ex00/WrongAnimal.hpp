#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Data.hpp"

class	WrongAnimal
{
	protected:
		std::string	type;
	public:
		virtual ~WrongAnimal();
		WrongAnimal();
		WrongAnimal(const WrongAnimal & obj);
		WrongAnimal	&	operator = (const WrongAnimal & obj);

		void				makeSound() const;
		virtual void		print(const int type, const std::string & color) const;
		virtual	std::string	getType() const;
};

#endif