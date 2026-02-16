#include "Cat.hpp"

Cat::~Cat() 
{
    delete this->brain;
    print(Destructor, RED); 
}

Cat::Cat() : A_Animal(),  type("Cat"), brain(new Brain)
{
    print(D_Constructor, RED);
}

Cat::Cat(const Cat & obj) : A_Animal(obj)
{
    this->brain = new Brain(*obj.brain);
    this->type = obj.type;
    print(C_Constructor, RED);
}

Cat & Cat::operator = (const Cat & obj)
{
    if (this != &obj)
    {
        A_Animal::operator = (obj);
        delete this->brain;
        this->brain = new Brain(*obj.brain);
        this->type = obj.type;
    }
    print(A_Operator, RED);
    return *this;
}

std::string    Cat::getType(void) const
{
    return this->type;
}

void    Cat::makeSound(void) const
{
    std::cout << RED << BOLD << " Meow!\n";
}