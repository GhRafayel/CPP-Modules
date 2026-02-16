#include "Data.hpp"
#include "A_Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{

    // A_Animal b;
    A_Animal * array[6];

    for (short int i = 0; i < 6; i++)
    {
        if (i <= 2)array[i] = new Cat;
        else array[i] = new Dog;
    }
    for (short int i = 0; i < 6; i++) delete array[i];

    return (0);
}