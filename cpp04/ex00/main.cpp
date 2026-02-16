#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    WrongAnimal worngAnimal;
    WrongCat    wrongCat;

    worngAnimal.makeSound(); // should be the some 
    wrongCat.makeSound(); // should be the some 

    std::cout << "--------------------------------------\n";

    const Animal* meta = new Animal();

    Animal* j = new Dog();

    const Animal* i = new Cat();

    std::cout << j->getType() << std::endl;
    
    std::cout << i->getType() << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    
    meta->makeSound();

    delete meta;
    delete j;
    delete i;
    
    return 0;
}