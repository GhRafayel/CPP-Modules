#include "PmergeMe.hpp"

PmergeMe::~PmergeMe() {}

template <typename Container>
void PmergeMe::is_sorted_container(const Container &c)
{
	for (size_t i = 1; i < c.size(); ++i)
	{
		if (c[i - 1] > c[i])
		{
			file  << "============= NO ❌ ================" << std::endl;
			return;
		}
	}
	file  << "============= OK ✅ ================" << std::endl;
}

PmergeMe::PmergeMe(const std::string & str) : _input(str), count(0) {
	file.open("debug.sh");
	split();
}

int	PmergeMe::conver(const std::string & str){
    char *      end = NULL;
    long int    res = static_cast<long int>(std::strtod(str.c_str(), &end));
	if (end[0] != '\0')
    	throw std::runtime_error("Error: invalid character in input!");
	else if (res < 0)
    	throw std::runtime_error("Error: invalid input! Negative number.");
	else if (res > INT_MAX)
    	throw std::runtime_error("Error: invalid input! Number too large.");

    return static_cast<int>(res);
}

std::string PmergeMe::str_trime(std::string & str)
{
	if (!str.length()) return str;
	int	start = 0;
	int	end   = str.length() - 1;

	while (str[start] && (str[start] == ' ' || str[start] == '\t'))
		start++;
	while (str[end] && (str[end] == ' ' || str[end] == '\t'))
		end--;
	return (str.substr(start, end - start + 1));
}

std::string  PmergeMe::change_tabs_to_space() {
	for (size_t i = 0; i < _input.length(); i++)
	{
		if (_input[i] == '\t')_input[i] = ' ';
		if (_input[i] != ' ' && !std::isdigit(_input[i]))
			throw std::runtime_error("Error: invalid input!");
	}
	return _input;
}

void    PmergeMe::split(void)
{
	change_tabs_to_space();
	_input = str_trime(_input);
	if (_input.length() == 0)
		throw std::runtime_error("Error: empty input!");
	while (true)
	{
		int	res = 0;
		int ind = _input.find(' ');
		if (ind == -1)
		{
			res = conver(_input);
			_vector.push_back(res);
			_deque.push_back(res);
			break;
		}
		res = conver(_input.substr(0, ind));
		_deque.push_back(res);
		_vector.push_back(res);
		_input = _input.substr(ind, _input.length());
		_input = str_trime(_input);
	}
	if (_vector.size() == 1) throw std::runtime_error("Error: at least 2 arguments are required!");
}

template<typename Container>
void	PmergeMe::print(Container & array, const std::string & name)
{
	if (name.size())
	{
		file << name << "[ ";
		for (typename Container::iterator it = array.begin(); it != array.end(); it++)
			file << *it << " ";
		file << " ]" << std::endl;
		return;
	}
	for (typename Container::iterator it = array.begin(); it != array.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

template<typename Container>
void	PmergeMe::print2d(std::vector<Container> & array, const std::string & name)
{
	file << name;
	if (!array.size()) file << "empty";
	for (size_t i = 0; i < array.size(); i++)
	{
		file  << " [";
		for (typename Container::iterator it = array[i].begin(); it != array[i].end(); it++)
		{
			file << *it << (array[i].size() - 1 ? " " : "");
		}
		file << "] " ;
	}
	file << std::endl;
}

template<typename Container>
std::vector<Container> PmergeMe::create2D(Container & arr, size_t pair)
{
	std::vector<Container> temp;
	for (size_t i = 0; i < arr.size() / pair * pair; i += pair)
		temp.push_back(Container(arr.begin() + i, arr.begin() + pair + i));
	return temp;
}

template<typename Container>
void	PmergeMe::array_back(Container & arr, Container & no_pair, std::vector<Container> & arr2d)
{
	size_t len = 0;
	arr.clear();
	for (size_t i = 0; i < arr2d.size(); i++, len += arr2d[0].size())
		arr.insert(arr.end(), arr2d[i].begin(), arr2d[i].end());
	arr.insert(arr.end(), no_pair.begin(), no_pair.end());
}

template<typename Container>
void PmergeMe::swap_pair(Container & arr, size_t *pair)
{
	//file << "\n------------------------------ SWAP " << *pair << " PAIR -----------------------------------------\n" << std::endl;
	//file << "count " << this->count << std::endl;
	std::vector<Container>	main(create2D(arr, *pair));
	Container				no_pair(arr.begin() + main.size() * *pair, arr.end());

	//print2d(main, "Container before => ");
	for (size_t i = 0; i + 1 < main.size(); i += 2)
	{
		count++;
		Container	temp(main[i].begin(), main[i].end());
		if (main[i][*pair - 1] > main[i + 1][*pair - 1])
		{
			main[i] = main[i + 1];
			main[i + 1] = temp;
		}
	}
	//print2d(main, "Container after =>  ");
	//file << "count " << this->count << std::endl;
	//file << "\n==================================================================================\n";
	array_back(arr, no_pair, main);
	if ((*pair == 1 && (*pair = 2) ) || (arr.size() / (*pair = *pair * 2) >= 2))
		swap_pair(arr, pair);
}

std::vector<int> PmergeMe::find_Jacobsthal(size_t len)
{
	std::vector<int> Jakob_order;
	size_t i = 1;

	while (i < len)
	{
		size_t	jakob = (pow(2, i + 1) + pow(-1, i)) / 3;
		Jakob_order.push_back(jakob);
		i++;
	}
	return Jakob_order;
}

template<typename Container>
void	PmergeMe::create_main_pend(Container & arr, std::vector<Container> & main, std::vector<Container> & pend, size_t pair)
{
	//file << "\n------------------------------ CREATE_MAIN_PEND " << pair << " PAIR -----------------------------------------\n" << std::endl;
	std::vector<Container>	res(create2D(arr, pair));

	//print2d(res,  "Full Container => ");
	//file << "\n==================================================================================\n";	
	for (size_t i = 0; i < res.size(); i++)
	{
		if (i % 2 == 0)
			pend.push_back(res[i]);
		else
			main.push_back(res[i]);
	}
}

template <typename Container>
void	PmergeMe::binary_search(std::vector<Container> & main, Container & val, size_t J)
{
	//file << "\n------------------------------ BINARY_SEARCH JACOBSTHAL " << J << " -----------------------------------------\n";

	typename std::vector<Container>::iterator begin = main.begin();
	typename std::vector<Container>::iterator end = J < main.size() && J != 0 ? main.begin() + J : main.end();

	//file << "count " << this->count << std::endl;
	//print(val, "inserted =>			");
	//print2d(main, "Before main =>	");
	int dis = std::distance(begin, end);

	while (begin < end)
	{
		typename std::vector<Container>::iterator mid = begin + dis / 2;
		count++;
		if(val.back() < (*mid).back())
			end = mid;
		else
			begin = mid + 1;
		dis = std::distance(begin, end);
	}
	main.insert(begin, val);
	//print2d(main, "After main =>	");
	//file << "count " << this->count << std::endl;
}

template<typename Container>
void	PmergeMe::insert(Container & arr, size_t pair)
{
	std::vector<Container>	main;
	std::vector<Container>	pend;
	create_main_pend(arr, main, pend, pair);
	
	size_t	C_J, P_J;
	std::vector<int>	Jakob = find_Jacobsthal(main.size());
	size_t				total_size = main.size() + pend.size();
	Container			no_pair(arr.begin() + total_size * pair, arr.end());
	
	// file << "\n------------------------------ INSERT " << pair << " PAIR -----------------------------------------\n" << std::endl;
	// print2d(main, "main =>    ");	
	// print2d(pend, "pend =>    ");
	// print(no_pair, "no_pair =>	");
	// print(Jakob, "Jakob =>	");
	main.insert(main.begin(), pend[0]);
	for (size_t i = 1; i < Jakob.size(); i++)
	{
		C_J = Jakob[i];
		P_J = Jakob[i - 1];
		for (size_t j = C_J; j > P_J && C_J <= pend.size(); j--)
			binary_search(main, pend[j - 1], C_J + P_J - 1);
	}
	for (size_t i = 1; total_size > main.size(); i++)
		binary_search(main, pend[pend.size() - i], main.size() - (i - 1));
	array_back(arr, no_pair, main); 
	//print(arr,  "Full Container => ");
	if ((pair /= 2))
		insert(arr, pair);
}

void	PmergeMe::Ford_Jonson_algoritm()
{
	// print(_vector, "\n------------------------------ INPUT -----------------------------------------\n");
	// file << "\n==================================================================================\n";

	clock_t start, end;
	size_t	pair = 1;
	double	result;

	std::cout << "Before: vector =>	";
	print(_vector, "");
	start = clock();
	swap_pair(_vector, &pair);
	insert(_vector, (pair / 2));
	end = clock();
	std::cout << "After: vector =>	";
	print(_vector, "");
	result = (double)(end - start) / CLOCKS_PER_SEC * 1000000.0;
	std::cout << "Time to process a range of " << _vector.size();
	std::cout <<  " elements with std::vector : " << "count :	";
	std::cout << this->count << " | "  << result << " us" << std::endl;
	//is_sorted_container(_vector);
	this->count = 0;
	pair = 1;
	start = clock();
	swap_pair(_deque, &pair);
	insert(_deque, (pair / 2));
	end = clock();
	result = (double)(end - start) / CLOCKS_PER_SEC * 1000000.0;
	std::cout << "Time to process a range of " << _deque.size();
	std::cout <<  " elements with std::deque:	" << "count :		";
	std::cout << this->count << " | "  << result << " us" << std::endl;
	//is_sorted_container(_deque);

}
