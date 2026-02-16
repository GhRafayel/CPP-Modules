#include "Character.hpp"

Character::~Character()
{
    for (short int i = 0; i < 4; i++)
    {
        delete this->inventory[i];
    }
}

Character::Character() : name("Character")
{
    for (short int i = 0; i < 4; i++)
    {
        this->inventory[i] = NULL;
    }
}

Character::Character(const std::string & name) : name(name)
{
    for (short int i = 0; i < 4; i++)
    {
        this->inventory[i] = NULL;
    }
}

Character::Character(const Character & obj) : name(obj.name)
{
    for (short int i = 0; i < 4; i++)
    {
        if (obj.inventory[i])
            this->inventory[i] = obj.inventory[i]->clone();
        else
            this->inventory[i] = NULL;
    }
}

Character & Character::operator = (const Character & obj)
{
    if (this != & obj) 
    {
        for (short int i = 0; i < 4; i++)
        {
            if (this->inventory[i]) delete this->inventory[i];
           
            if (obj.inventory[i])
                this->inventory[i] = obj.inventory[i]->clone();
            else
                this->inventory[i] = NULL;
        }
        this->name = obj.name;
    }
    return * this;
}   

std::string const & Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria * m)
{
    if (!m) return ;
    for (short int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)  this->inventory[i] = m;
        if (m->getType() == this->inventory[i]->getType()) return; 
    }
}

void    Character::unequip(int idx)
{
    if (idx > 3 || idx < 0 || !this->inventory[idx]) return;
    // delete this->inventory[idx];
    this->inventory[idx] = NULL;
}

void    Character::use(int inx, ICharacter & target)
{
   if (inx < 0 || inx > 3 || this->inventory[inx] == NULL) return ;

   this->inventory[inx]->use(target);
}