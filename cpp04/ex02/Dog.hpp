#ifndef DOG_HPP
#define DOG_HPP

#include "Data.hpp"
#include "A_Animal.hpp"
#include "Brain.hpp"


class   Dog : public A_Animal
{
    private:
        std::string type;
        Brain * brain;
    public:
        ~Dog();
        Dog();
        Dog(const Dog & obj);
        Dog & operator = (const Dog & obj);

        std::string getType(void) const;
        void        makeSound(void) const;
};

#endif