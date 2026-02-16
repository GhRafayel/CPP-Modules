#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    Animal * test1[6];

    for (int i = 0; i < 6; i++)
    {
        if (i <= 2) test1[i] = new Cat;
        else test1[i] = new Dog;
    }

    const Cat * cat = new Cat();
    const Cat * cat1 = new Cat(*cat);
    const Cat * cat2 = cat;

    cat->makeSound();
    cat1->makeSound();
    cat2->makeSound();
 
     Dog * dog = new Dog();
     Dog * dog1 = new Dog(*dog);
     Dog * dog2 = new Dog(*dog1);

    delete dog2;
    dog2 = dog;

    dog->makeSound();
    dog1->makeSound();
    dog2->makeSound();

   // delete dog;
    delete dog1;
    delete dog2;

    for (int i = 0; i < 6; i++) delete test1[i];

    delete cat;
    delete cat1;
    
    return 0;
}