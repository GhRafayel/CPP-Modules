
#include "Data.hpp"

int main()
{
    IMateriaSource * src = new MateriaSource(); 
    
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter * me = new Character("me");
    AMateria * tmp = src->createMateria("ice");
    
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    me->equip(tmp);
    //me->unequip(3);
    //me->unequip(1);
    // me->unequip(0);

    ICharacter* bob = new Character("bob");

    me->use(0, * bob);
    me->use(1, * bob);

    delete bob;
    delete me;
    delete src;

    return 0;
}



