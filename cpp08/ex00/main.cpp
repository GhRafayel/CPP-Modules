#include "easyfind.hpp"

int main (void)
{
    std::vector<int> nubers;
    for (size_t i = 0; i < 10; i++)
    {
        nubers.push_back(i);
    }
    try
    {
        std::cout << *easyfind(nubers, 2) << std::endl;
        std::cout << *easyfind(nubers, 22) << std::endl;
        std::cout << *easyfind(nubers, -1) << std::endl;
    }
    catch(const std::exception& e){std::cerr << e.what() << std::endl;}
    return 0;
}