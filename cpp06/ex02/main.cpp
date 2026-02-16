/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghazary <rghazary@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 13:54:56 by rghazary          #+#    #+#             */
/*   Updated: 2025/09/19 13:54:57 by rghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    Base *  pnt;
    int     val = std::rand() % 3;

    if (val == 0){
        pnt = new A;
    }
    else if (val == 1){
        pnt = new B;
    }
    else
        pnt = new C;
    return pnt;
}

void    identify(Base * obj)
{
    if (dynamic_cast<A*>(obj))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(obj))
         std::cout << "B" << std::endl;
    else
     std::cout << "C" << std::endl;
}

void    identify(Base & obj)
{
    try
    {
        A & a = dynamic_cast<A&>(obj);
        (void)a;
        std::cout << "A" << std::endl;
        return ;
    }
    catch(...) {}
    try
    {
        B & b = dynamic_cast<B&>(obj);
        (void)b;
        std::cout << "B" << std::endl;
        return ;
    }
    catch(...) {}
    try
    {
        C & c = dynamic_cast<C&>(obj);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch(...) {}
}

int main()
{
    std::srand(std::time(NULL));

    Base * test1 = new A;
    Base * test2 = new B;
    Base * test3 = new C;

    std::cout << "=========test 1 ==========" << std::endl;
    identify(test1);
    identify(*test1);
    std::cout << "=========test 2 ==========" << std::endl;
    identify(test2);
    identify(*test2);
    std::cout << "=========test 3 ==========" << std::endl;
    identify(test3);
    identify(*test3);
    std::cout << "===========================" << std::endl;

    for (int i = 0; i < 5; i++)
    {
        Base* obj = generate();
        std::cout << "Test " << i + 1 << ":" << std::endl;

        std::cout << "Identify with pointer: ";
        identify(obj);

        std::cout << "Identify with reference: ";
        identify(*obj);

        delete obj;
        std::cout << "---------------------" << std::endl;
    }

    delete test1;
    delete test2;
    delete test3;

    return 0;
}