#include "Cat.hpp"

Cat::~Cat () { print(Destructor, RED); }

Cat::Cat () : type("Cat") { print(D_Constructor, RED); }

Cat::Cat(const Cat & obj) : Animal(obj) { print(C_Constructor, RED); }


Cat Cat::operator = (const Cat & obj)
{
    if (this != &obj) this->type = obj.type;
    print(A_Operator, RED);
    return *this;
}

std::string    Cat::getType() const { return this->type; }

void    Cat::makeSound() const { std::cout << getType() << " Meow!\n"; }