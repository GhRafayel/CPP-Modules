#include "Brain.hpp"

Brain::~Brain()
{
	print(Destructor, MAGENTA);
}

Brain::Brain()
{
	print(D_Constructor, MAGENTA);
}

Brain::Brain(const Brain & obj)
{
    for (short int i = 0; i < 100; i++)
    {
        this->ideas[i] = obj.ideas[i];
    }
    print(C_Constructor, MAGENTA);
}

Brain & Brain::operator = (const Brain & obj)
{
    if (this != &obj)
    {
        for (short int i = 0; i < 100; i++)
        {
            this->ideas[i] = obj.ideas[i];
        }
    }
    print(A_Operator, MAGENTA);
    return *this;
}

void	Brain::print(const int type, const std::string & color) const
{
	std::cout << color << BOLD;
	switch (type)
	{
		case Destructor:
			std::cout << "Brain" << " destructor colled!\n";
			break;
		case D_Constructor:
			std::cout << "Brain" << " default constructor colled!\n";
			break;
		case C_Constructor:
			std::cout << "Brain" << " copy constructor colled!\n";
			break;
		case P_Constructor:
			std::cout << "Brain" << " Parameterize constructor colled!\n";
			break;
		case A_Operator:
			std::cout << "Brain" << " assignment operator colled!\n";
			break;
	}
	std::cout << RESET;
}