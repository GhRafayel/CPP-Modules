#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
    for (short int i = 0; i < 4; i++)
    {
        delete this->array[i];
    }
}

MateriaSource::MateriaSource()
{
    for (short int i = 0; i < 4; i++)
    {
        this->array[i] = NULL;
    }   
}

MateriaSource::MateriaSource(const MateriaSource & obj)
{
    for (short int i = 0; i < 4; i++)
    {
        this->array[i] = obj.array[i]->clone();
    }
}

MateriaSource & MateriaSource::operator = (const MateriaSource & obj)
{
    if (this != &obj)
    {
        for (short int i = 0; i < 4; i++)
        {
            delete this->array[i];
            this->array[i] = obj.array[i]->clone();
        }
    }
    return *this;
}

void    MateriaSource::learnMateria(AMateria * m)
{
    for (short int i = 0; i < 4; i++)
    {
        if (this->array[i] == NULL)
        {
            this->array[i] = m->clone();
            delete m;
            return ;
        }
    }
    delete m;
}

AMateria * MateriaSource::createMateria(const std::string & type)
{
    for (short int i = 0; i < 4; i++)
    {
       if (this->array[i])
       {
            if (this->array[i]->getType() == type)
            {
                return this->array[i]->clone();
            }
       }
    }
    return (NULL);
}

