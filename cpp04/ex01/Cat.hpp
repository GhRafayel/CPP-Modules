#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal
{
    private:
		std::string type;
		Brain *		brain;
    public:
		~Cat();
		Cat();
		Cat(const Cat & obj);

		Cat		&		operator = (const Cat & obj);
		void			makeSound(void) const;
		std::string		getType() const;
};

#endif