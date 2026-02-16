#ifndef DOG_HPP
#define DOG_HPP

#include "Data.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		std::string type;
		Brain *		brain;
	public:
		~Dog();
		Dog();
		Dog(const Dog & obj);

		Dog		&		operator = (const Dog & obj);
		void			makeSound(void) const;
		std::string		getType() const;
};

#endif