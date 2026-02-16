#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: Invalid number of parameters. Expected: 2" << std::endl;
        return 1;
    }
    try
    {
        BitcoinExchange btc(argv[1]);
        btc.get_result();
    }
    catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
    return 0;
}
