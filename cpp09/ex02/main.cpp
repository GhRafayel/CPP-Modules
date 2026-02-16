#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 1)
	{
		std::cerr << "Error: Invalid number of parameters. Expected: 2" << std::endl;
		return 1;
	}
	try
	{
		std::string input;
		for (size_t i = 1; argv[i]; i++)
		{
			input += " ";
			input += argv[i];
		}
		PmergeMe pmergeMe(input);
		pmergeMe.Ford_Jonson_algoritm();
	}
	catch(const std::exception& e) {std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl; };
	return 0;
}