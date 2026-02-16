#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

void    print_str(std::string str, int i);

class Fixed 
{
	public:

		Fixed();
		~Fixed();
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed & obj);

		Fixed & operator = (const Fixed & obj);

		bool	operator >	(const Fixed & obj) const;
		bool	operator <  (const Fixed & obj) const;
		bool	operator <= (const Fixed & obj) const;
		bool	operator >= (const Fixed & obj) const;
		bool	operator == (const Fixed & obj) const;
		bool	operator != (const Fixed & obj) const;

		Fixed	operator * (const Fixed & obj) const;
		Fixed	operator / (const Fixed & obj) const;
		Fixed	operator + (const Fixed & obj) const;
		Fixed	operator - (const Fixed & obj) const;

		Fixed & operator --();
		Fixed & operator ++();
		
		Fixed 	operator ++(int);
		Fixed 	operator --(int);

		static	Fixed & min(Fixed & a, Fixed & b);
		static  Fixed & max(Fixed & a, Fixed & b);

		const static  Fixed & min(const Fixed & a, const Fixed & b);
		const static  Fixed & max(const Fixed & a, const Fixed & b);

		void	setRawBits(const int raw);

		float	toFloat(void)		const;
		int		getRawBits(void)	const;
		int		toInt(void)			const;

	private:
		int					_value;
		const static int	_franctionalBits = 8;
};

#endif 