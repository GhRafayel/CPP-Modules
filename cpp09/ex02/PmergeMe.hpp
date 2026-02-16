#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <algorithm>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <cmath>
#include <ctime>
#include <deque>
#include <vector>

class   PmergeMe {

	private:
		std::ofstream		file;
		std::vector<int>	_vector;
		std::deque<int>		_deque;
		std::string			_input;
		int					count;

		PmergeMe();
		PmergeMe(const PmergeMe &);
		PmergeMe & operator = (const PmergeMe &);

		std::string	str_trime(std::string &);
		std::string change_tabs_to_space();

		int			conver(const std::string &);
		void		split(void);

		template<typename Container>
		void	is_sorted_container(const Container &c);

		template<typename Container>
		void	print(Container &, const std::string &);
		
		template<typename Container>
		void	print2d(std::vector<Container> &, const std::string &);

		template<typename Container>
		std::vector<Container> create2D(Container &, size_t);

		template<typename Container>
		void	swap_pair(Container &, size_t *);

		template<typename Container>
		void	array_back(Container &, Container &, std::vector<Container> &);

		template<typename Container>
		void	insert(Container &, size_t);

		template<typename Container>
		void	binary_search(std::vector<Container> &, Container &, size_t);

		template<typename Container>
		void	create_main_pend(Container &, std::vector<Container> &, std::vector<Container> &, size_t);
		std::vector<int> find_Jacobsthal(size_t);

	public:
		~PmergeMe();

		PmergeMe(const std::string &);
		void	Ford_Jonson_algoritm();
};

#endif
