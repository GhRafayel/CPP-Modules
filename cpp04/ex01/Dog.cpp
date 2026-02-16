#include "Dog.hpp"

Dog::~Dog(void)
{
    print(Destructor, BLUE);
    delete this->brain;
}

Dog::Dog(void) : Animal(), type("Dog"), brain(new Brain)
{
    print(D_Constructor, BLUE);
}

Dog::Dog(const Dog & obj) : Animal(obj)
{
    this->brain = new Brain(*obj.brain);
    this->type = obj.type;
    print(C_Constructor, BLUE);
}

Dog & Dog::operator = (const Dog & obj)
{
    if (this != & obj)
    {
        Animal::operator = (obj);
        delete this->brain;
        this->brain = new Brain(*obj.brain);
        this->type = obj.type;
    }
    print(A_Operator, BLUE);
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << getType() << " Woof!\n";
}

std::string Dog::getType() const
{
    return this->type;
}