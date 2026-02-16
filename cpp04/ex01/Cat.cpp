#include "Cat.hpp"

Cat::~Cat ()
{
    print(Destructor, RED);
    delete this->brain;
}

Cat::Cat () : Animal(), type("Cat"), brain(new Brain)
{
    print(D_Constructor, RED);
}

Cat::Cat(const Cat & obj) : Animal(obj)
{
    this->brain = new Brain(*obj.brain);
    this->type = obj.type;
    print(C_Constructor, RED);
}

Cat & Cat::operator = (const Cat & obj)
{
    if (this != &obj)
    {
        Animal::operator = (obj);
        delete this->brain;
        this->brain = new Brain(*obj.brain);
        this->type = obj.type;
    }
    print(A_Operator, RED);
    return *this;
}

std::string    Cat::getType() const
{
    return this->type;}

void    Cat::makeSound() const
{
    std::cout << RED << BOLD << getType() << " Meow!\n";
}