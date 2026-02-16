#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal(void) { print(Destructor, WHITE); }

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	print(D_Constructor, WHITE);
}

WrongAnimal::WrongAnimal(const WrongAnimal & obj) : type(obj.type)
{
	print(C_Constructor, WHITE);
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & obj)
{
	if (this != &obj) this->type = obj.type;
	print(A_Operator, WHITE);
	return *this;
}

std::string		WrongAnimal::getType() const 
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << WHITE << BOLD << getType() << " has no sound\n";
}

void	WrongAnimal::print(const int type, const std::string & color) const
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


