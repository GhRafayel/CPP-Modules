#ifndef A_ANIMAL_HPP
#define A_ANIMAL_HPP

#include "Data.hpp"

class	A_Animal
{
	protected:
		std::string type;
	public:
		virtual~A_Animal();
		 A_Animal();
		 A_Animal(const A_Animal & obj);
		 A_Animal &	operator = (const A_Animal & obj);

		virtual void		print(const int type, const std::string & color) const;
		virtual void		makeSound(void) const = 0;
		virtual std::string	getType(void) const ;
};

#endif