#include "AMateria.hpp"

AMateria::~AMateria() {}

AMateria::AMateria() : type("Materia") {}

AMateria::AMateria(const std::string & type) : type(type) {}

AMateria::AMateria(const AMateria & obj) : type(obj.type) {}

AMateria & AMateria::operator = (const AMateria & obj)
{
    if (this != &obj) this->type = obj.type;
    return (*this);
}

const std::string &  AMateria::getType() const
{
    return this->type;
}

void    AMateria::use(ICharacter & target)
{
    std::cout << target.getName() << std::endl;
}