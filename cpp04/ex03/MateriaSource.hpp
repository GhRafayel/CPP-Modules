#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"


class MateriaSource : public IMateriaSource
{
    private:
        AMateria * array[4];
    public:
        ~MateriaSource();
        MateriaSource();
        MateriaSource(const MateriaSource &);
        MateriaSource & operator = (const MateriaSource &);

        void learnMateria(AMateria *);
        AMateria* createMateria(std::string const &);
};

#endif