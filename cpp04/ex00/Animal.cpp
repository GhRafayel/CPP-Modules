#include "Animal.hpp"

Animal::~Animal(void) 
{
	print(Destructor, WHITE);
}

Animal::Animal() : type("Animal")
{
	print(D_Constructor, WHITE);
}

Animal::Animal(const Animal & obj) : type(obj.type)
{
	print(C_Constructor, WHITE);
}

Animal & Animal::operator=(const Animal & obj)
{
	if (this != &obj) this->type = obj.type;
	print(A_Operator, WHITE);
	return *this;
}

std::string		Animal::getType() const 
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << WHITE << BOLD << getType() << " has no sound\n";
}

void	Animal::print(const int type, const std::string & color) const
{
	std::cout << color << BOLD;
	switch (type)
	{
		case Destructor:
			std::cout << getType() << " destructor colled!\n";
			break;
		case D_Constructor:
			std::cout << getType() << " default constructor colled!\n";
			break;
		case C_Constructor:
			std::cout << getType() << " copy constructor colled!\n";
			break;
		case P_Constructor:
			std::cout << getType() << " Parameterize constructor colled!\n";
			break;
		case A_Operator:
			std::cout << getType() << " assignment operator colled!\n";
			break;
	}
	std::cout << RESET;
}


