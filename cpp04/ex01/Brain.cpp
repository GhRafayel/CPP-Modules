#include "Brain.hpp"

Brain::~Brain() { print(Destructor); }

Brain::Brain() { print(D_Constructor); }

Brain::Brain(const Brain & obj)
{
    for (int i = 0; i < 100; i++)
	{
		ideas[i] = obj.ideas[i];
	}
    print(C_Constructor);
}

Brain & Brain::operator = (const Brain & obj)
{
    if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = obj.ideas[i];
	}
    print(A_Operator);
    return *this;
}

void	Brain::print(const int type)
{
	std::cout << MAGENTA << BOLD;
	switch (type)
	{
		case 1:
			std::cout << "Brain" << " destructor colled!\n";
			break;
		case 2:
			std::cout << "Brain" << " default constructor colled!\n";
			break;
		case 3:
			std::cout << "Brain" << " copy constructor colled!\n";
			break;
		case 4:
			std::cout << "Brain" << " copy constructor colled!\n";
			break;
		case 5:
			std::cout << "Brain" << " assignment operator colled!\n";
			break;
	}
	std::cout << RESET;
}
