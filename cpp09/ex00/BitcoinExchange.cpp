#include "BitcoinExchange.hpp"

BitcoinExchange::~BitcoinExchange() {};
BitcoinExchange::BitcoinExchange(const std::string & fileName) : fileName(fileName) {};

bool    BitcoinExchange::print(int val, const std::string & str) {

	std::cerr << "\033[31m";
	switch (val)
	{
		case 1:
			std::cerr << "Error: bad input => " + str;
			break;
		case 2:
			std::cerr << "Error: not a positive number. => " + str;
			break;
		case 3:
			std::cerr <<  "Error: big number. => " + str;
			break;
		case 4:
			std::cerr << "Error: bad input line too long => " + str;
			break;
	}
	std::cerr << "\033[0m" << std::endl;
	return true;
}

std::string BitcoinExchange::str_trime(const std::string & str)
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

bool BitcoinExchange::validate_file(const std::string & fileName) {

	std::ifstream file(fileName.c_str());

	if (!file.is_open())
	{
		if (errno == EACCES) {
			throw std::runtime_error("Permission denied: cannot open: " + fileName);
		} else if (errno == ENOENT) {
			throw std::runtime_error(fileName + "file not found: ");
		} else {
			throw std::runtime_error("Cannot open file: " + fileName);
		}
	}
	return true;
}

bool    BitcoinExchange::make_db()
{
	validate_file("cpp_09/data.csv");

	std::ifstream 	file("cpp_09/data.csv");
	std::string		buffer;

	getline(file, buffer);
	buffer = str_trime(buffer);
	if (buffer.substr(0, 18) != "date,exchange_rate" || buffer.size() > 19)
		throw std::runtime_error("Error: invalid data file");
	while ( getline(file, buffer))
		validate_db(str_trime(buffer));
	if (_DB.size() < 1) throw std::runtime_error("Error: Something was changed in data.csv");
	return true;
}

bool     BitcoinExchange::validate_db(const std::string & buffer)
{
	char *	end = NULL;
	double	val;
	if (buffer.size() < 11 || !validate_calendar(buffer.substr(0, 10)) || buffer[10] != ',')
		throw std::runtime_error("Error: Something was changed in data.csv");
	std::string num = str_trime(buffer.substr(11, buffer.length()));
	val = std::strtod(num.c_str(), &end);
	if (*end != '\0' || val < 0 || num.length() < 1 || num.length() > 16)
		throw std::runtime_error("Error: Something was changed in data.csv");
	_DB.insert(std::make_pair(buffer.substr(0, 10), val));
	return true;
}

std::string BitcoinExchange::change_tabs_to_space(std::string & str){
	for (size_t i = 0; i < str.length(); i++)
		if (str[i] == '\t') str[i] = ' ';
	return str;
}

bool	BitcoinExchange::validate_input_format(std::string & first_line)
{
	int	ind = first_line.find("|");
	if (ind == -1)
		throw std::runtime_error("Error: Missing file format => data | value");

	if (str_trime(first_line.substr(0, 4)) != "date" ||
		str_trime(first_line.substr(first_line.length() - 5, 5)) != "value" ||
		first_line[4] != ' ' || first_line[first_line.length() - 6] != ' ')
	{
		throw std::runtime_error("Error: Missing file format => data | value");
	}
	std::string temp = first_line.substr(5, first_line.length() - 10);
	ind = 0;
	for (size_t i = 0; i < temp.size(); i++)
	{
		if ((temp[i] == '|' && ind) || (temp[i] != ' ' && temp[i] != '|'))
			throw std::runtime_error("Error: Missing file format => data | value");
		if (temp[i] == '|' ) ind++;
	}
	return true;
}

bool	BitcoinExchange::validate_calendar(const std::string & str_key)
{
	char *	end = NULL;
	int		year = static_cast<int>(std::strtod(str_key.substr(0, 4).c_str(), &end));
	int		month = static_cast<int>(std::strtod(str_key.substr(5, 2).c_str(), &end));
	int		day =  static_cast<int>(std::strtod(str_key.substr(8, 2).c_str(), &end));

	if (month > 12 || day > 31) return false;
	if (month == 4 || month == 6 || month == 9 || month == 11)
		if (day > 30) return false;
	if (month == 2)
		if (((year % 4) == 0 && day > 29) || (year % 4 != 0 && day > 28)) return false;
	if (year < 2009) return false;
	return true;
}

bool    BitcoinExchange::validate_input_key (std::string & buffer)
{
	int		ind =  buffer.find("|");

	if (buffer.size() < 12 || ind == -1) return (print(1, buffer));
	for (size_t i = 0; i < buffer.length(); i++)
	{
		if (i == 4 || i == 7)
		{
			if (buffer[i] != '-') return (print(1, buffer));
		}
		else if (i > 9)
		{
			if (buffer[i] != ' ' || buffer[ind + 1] != ' ')
				return (print(1, buffer));
			validate_input_value(buffer, ind);
			break;
		}
		else
			if (!std::isdigit(buffer[i])) return (print(1, buffer));
	}
	return (true);
}

bool     BitcoinExchange::validate_input_value(std::string & buffer, int ind)
{
	std::string str_key = str_trime(buffer.substr(0, ind));
	std::string str_val = str_trime(buffer.substr(ind + 1, buffer.length()));
	char    *   end = NULL;
	double      price = static_cast<double>(std::strtod(str_val.c_str(), &end));

	if (!validate_calendar(str_key)) return (print(1,buffer));
	if (*end != '\0')
	{
		for (size_t i = 0; end[i]; i++)
			if (end[i] != ' ') return (print(1, buffer));
	}
	if (price < 0) return (print(2, buffer));
	if (str_val.length() > 17) return print(4, buffer);
	if (price >= static_cast<double>(1000)) return (print(3, buffer));
	if (str_key < _DB.begin()->first) return (print(1, buffer));
	for (int i = 10; i < ind; i++)
		if (buffer[i] != ' ') return (print(1, buffer));
	std::cout << std::fixed << std::setprecision(3);
	std::cout << str_key << " => " << str_val <<  " = " << price * find_cost(str_key) << std::endl;
	return true;
}

double	BitcoinExchange::find_cost(std::string & key){

	std::map<std::string, double>::iterator it = _DB.begin();
	while (it != _DB.end())
	{
		if (key == it->first) return it->second;
		it++;
	}
	it = _DB.begin();
	while (it != _DB.end())
	{
		if (key < it->first)
		{
			it--;
			return it->second;
		}
		it++;
	}
	it--;
	return (it->second);
}

bool	BitcoinExchange::get_result()
{
	make_db();
	validate_file(fileName);
	std::string		buffer;
	std::ifstream   file(fileName.c_str());
	getline(file, buffer);
	change_tabs_to_space(buffer);
	buffer = str_trime(buffer);
	validate_input_format(buffer);
	while (getline(file, buffer))
	{
		buffer = str_trime(buffer);
		validate_input_key(buffer);
	}
	return true;
}