#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <cstdlib>
#include <iterator>
#include <climits>
#include <stack>
#include <list>

class RPN : public std::stack<std::string>
{
    private:
        std::stack<int, std::list<int> > stack;
        std::string     input;
        int             count_number;
        int             count_token;
        RPN();
        RPN(const RPN &);
        RPN &		operator = (const RPN &);
        bool		math(std::string &);
        bool		is_token(std::string &);
        bool		convert(std::string &); 
        bool		calculate(std::string &);
        std::string	str_trime(std::string &);
    public:
        ~RPN();
        RPN(const std::string &);
        bool	rpn_execute();
};

#endif

