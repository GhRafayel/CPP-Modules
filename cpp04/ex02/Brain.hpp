#ifndef Brain_HPP
#define Brain_HPP

#include "Data.hpp"

class Brain
{
	private:
		std::string	ideas[100];
	public:
		~Brain();
		Brain();
		Brain(const Brain & obj);
		Brain & operator = (const Brain & obj);

		void	print(const int type, const std::string & color) const;
};

#endif