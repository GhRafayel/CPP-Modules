#include "Fixed.hpp"

std::ostream & operator << (std::ostream & os, const Fixed & fixed)
{
    os << fixed.toFloat();
    return os;
}

void    print_str(std::string str, int i)
{
    if (i == 1)
        std::cout << "\033[33m" << str << " constructor called" << std::endl;
    else if ( i == 2)
        std::cout << "\033[32m" << str << " assignment operator called" << std::endl;
    else if (i == 3)
        std::cout << "\033[34m" << str << " member function called" << std::endl;

    std::cout << "\033[0m";
}

int main(void)
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << Fixed::max(a, b) << std::endl;

    return (0);
}
