#include "WrongCat.hpp"

WrongCat::~WrongCat ()
{
    print(Destructor, RED);
}

WrongCat::WrongCat () : WrongAnimal(), type("WrongCat")
{
    print(D_Constructor, RED);
}

WrongCat::WrongCat(const WrongCat & obj) : WrongAnimal(obj)
{
    print(C_Constructor, RED);
}

WrongCat WrongCat::operator = (const WrongCat & obj)
{
    if (this != &obj) this->type = obj.type;
    print(A_Operator, RED);
    return *this;
}

std::string    WrongCat::getType() const { return this->type; }
