#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, double>	_DB;
		std::string						fileName;
		BitcoinExchange ();
		BitcoinExchange(const BitcoinExchange &);
		BitcoinExchange &	operator = (const BitcoinExchange &);

		std::string			str_trime(const std::string &);
		std::string			change_tabs_to_space(std::string & str);
		bool				validate_input_format(std::string &);
		bool				validate_file(const std::string &);
		bool				make_db();
		bool				validate_input_key (std::string &);
		bool				validate_input_value(std::string &, int);
		bool				validate_calendar(const std::string &);
		bool				validate_db(const std::string &);
		bool				print(int val, const std::string &);
		double				find_cost(std::string &);

	public:
		~BitcoinExchange();
		BitcoinExchange(const std::string &);
		bool			get_result();
};

#endif
