#include "Ice.hpp"

Ice::~Ice() {}

Ice::Ice() : type("ice") {}

Ice::Ice(const Ice & obj) : AMateria(obj)
{
    this->type = obj.type;
}

Ice & Ice::operator = (const Ice & obj)
{
    if (this != &obj)
    {
        AMateria::operator = (obj);
        this->type = obj.type;
    }
    return *this;
}

Ice * Ice::clone() const 
{
    return new Ice(*this);
}

void   Ice::use(ICharacter & target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

const std::string &  Ice::getType() const
{
    return this->type;
}