#include "Dog.hpp"

Dog::~Dog(void) { print(Destructor, BLUE); }

Dog::Dog(void) : type("Dog") { print(D_Constructor, BLUE); }


Dog::Dog(const Dog & obj) : Animal(obj) { print(C_Constructor, BLUE); }


Dog Dog::operator = (const Dog & obj)
{
    if (this != &obj) this->type = obj.type;
    print(A_Operator, BLUE);
    return *this;
}

void Dog::makeSound(void) const { std::cout << getType() << " Woof!\n"; }

std::string Dog::getType() const { return this->type; }