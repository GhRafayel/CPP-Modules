#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *  inventory[4];
    public:
        ~Character();
        Character();
        Character(const std::string &);
        Character(const Character &);
        Character & operator = (const Character &);

        std::string const & getName() const;
        void                equip(AMateria *);
        void                unequip(int);
        void                use(int, ICharacter&);
};

#endif