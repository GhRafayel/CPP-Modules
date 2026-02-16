#ifndef Cure_HPP
#define Cure_HPP

#include "AMateria.hpp"

class Cure :  public AMateria
{
    private:
        std::string type;
    public:
        ~Cure();
        Cure();
        Cure(const Cure &);
        Cure & operator = (const Cure &);
        Cure * clone() const;
        void   use(ICharacter &);

        const std::string & getType() const;

};

#endif