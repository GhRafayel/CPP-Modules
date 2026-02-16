#include "Cure.hpp"

Cure::~Cure() {}

Cure::Cure() : AMateria(),  type("cure") {}

Cure::Cure(const Cure & obj) : AMateria(obj)
{
    this->type = obj.type;
}

Cure & Cure::operator = (const Cure & obj)
{
    if (this != &obj) 
    {
        AMateria::operator = (obj);
        this->type = obj.type;
    }
    return *this;
}

Cure * Cure::clone() const
{
    return  new Cure(*this);
}

void   Cure::use(ICharacter & target)
{
    std::cout << "* heals " << target.getName()  << "'s wounds *" << std::endl;
}

const std::string &  Cure::getType() const
{
    return this->type;
}