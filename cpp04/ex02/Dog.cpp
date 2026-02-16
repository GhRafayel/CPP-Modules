#include "Dog.hpp"

Dog::~Dog() 
{
    delete this->brain;
    print(Destructor, BLUE); 
}

Dog::Dog() : A_Animal(),  type("Dog"), brain(new Brain)
{
    print(D_Constructor, BLUE);
}

Dog::Dog(const Dog & obj) : A_Animal(obj)
{
    this->brain = new Brain(*obj.brain);
    this->type = obj.type;
    print(C_Constructor, BLUE);
}

Dog & Dog::operator = (const Dog & obj)
{
    if (this != &obj)
    {
        A_Animal::operator = (obj);
        delete this->brain;
        this->brain = new Brain(*obj.brain);
        this->type = obj.type;
    }
    print(A_Operator, BLUE);
    return *this;
}

std::string    Dog::getType(void) const
{
    return this->type;
}

void    Dog::makeSound(void) const
{
    std::cout << RED << BOLD << " Woof!\n";
}