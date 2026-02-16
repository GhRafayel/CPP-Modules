#include "RPN.hpp"

RPN::~RPN() {}

RPN::RPN(const std::string & inp) : input(inp), count_number(0), count_token(0) {
	for (size_t i = 0; i < input.length(); i++)
	{
		if (input[i] == '\t')input[i] = ' ';
		if (input[i] == '.') throw std::runtime_error("Error: invalid input ");
	}
		
}

std::string RPN::str_trime(std::string & str)
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

bool	RPN::calculate(std::string & s)
{
	if (is_token(s))
	{
		count_token++;
		if (stack.size() < 2) throw std::runtime_error("Error: invalid order");
		math(s);
		return true;
	}
	count_number++;
	convert(s);
	return true;
}

bool    RPN::rpn_execute()
{
	std::string temp;
	input = str_trime(input);
	while (true)
	{
		int ind = input.find(' ');
		if (ind == -1)
		{
			calculate(input);
			if (count_number + count_token < 3 || count_number - count_token != 1)
				throw std::runtime_error("Error: not enough arguments provided");
			std::cout << stack.top() << std::endl;
			return true;
		}
		temp = input.substr(0, ind);
		calculate(temp);
		input = input.substr(ind, input.length());
		input = str_trime(input);
	}
	return true;
}

bool	RPN::is_token(std::string & str)
{
	if (str.length() == 1)
	{
		if (str[0] == '-' ||  str[0] == '+' || str[0] == '/' || str[0] == '*')
			return true;
	}
	return false;
}

bool	RPN::convert(std::string & str)
{
	char		*end;
	long int	val = static_cast<long int>(strtod(str.c_str(), &end));
	if (end[0] != '\0' || val < INT_MIN || val > 9)
		throw std::runtime_error("Error: invalid number");
	stack.push(static_cast<int>(val));
	return true;
}

bool	RPN::math(std::string & token)
{
	long int result = 0;
	long int num1 = stack.top();
	stack.pop();
	long int num2 = stack.top();
	stack.pop();

	if (num1 == 0 && token[0] == '/') throw std::runtime_error("Error: can not divide by 0");
	if (token[0] == '+') result = (num2 + num1);
	if (token[0] == '-') result = (num2 - num1);
	if (token[0] == '/') result = (num2 / num1);
	if (token[0] == '*') result = (num2 * num1);

	if (result < INT_MIN ) throw std::runtime_error("Error: the result geting les thean INT_MIN ");
	if (result > INT_MAX) throw std::runtime_error("Error: the result geting bigger thean INT_MAX ");
	
	stack.push(result);
	return true;
}

