#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class AMateria
{
    protected:
        std::string type;
    public:
        virtual ~AMateria();
        AMateria();
        AMateria(const std::string &);
        AMateria(const AMateria &);
        AMateria & operator = (const AMateria &);

        virtual const std::string & getType() const;
        virtual          AMateria * clone() const = 0;
        virtual void                use(ICharacter &);
};

#endif