#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
    private:
		std::string type;
    public:
		~WrongCat();
		WrongCat();
		WrongCat(const WrongCat & obj);

		WrongCat        operator = (const WrongCat & obj);
		std::string		getType() const;		
};

#endif