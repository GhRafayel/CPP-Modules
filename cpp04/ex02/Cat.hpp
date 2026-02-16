#ifndef CAT_HPP
#define CAT_HPP

#include "Data.hpp"
#include "A_Animal.hpp"
#include "Brain.hpp"


class   Cat : public A_Animal
{
    private:
        std::string type;
        Brain * brain;
    public:
        ~Cat();
        Cat();
        Cat(const Cat & obj);
        Cat & operator = (const Cat & obj);

        std::string getType(void) const;
        void        makeSound(void) const;
};

#endif