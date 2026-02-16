#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: Invalid number of parameters. Expected: 2" << std::endl;
        return 1;
    }
    try
    {
        RPN rpn(argv[1]);
        rpn.rpn_execute();
    }
    catch(const std::exception& e) {std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl; };
    return 0;
}