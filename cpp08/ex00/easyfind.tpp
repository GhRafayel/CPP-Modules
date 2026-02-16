#include "easyfind.hpp"

template <typename Container>

typename Container::iterator easyfind(Container arg, int val)
{
	if (val < 0) throw std::invalid_argument("Index cannot be negative");
	typename Container::iterator it = std::find(arg.begin(), arg.end(), val);
	if (it == arg.end()) throw std::out_of_range("Error: The index out of range!");
	return it;
}