
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

void    print_str(std::string str, int i);

class Fixed
{
	public:
	   ~Fixed();
		Fixed();
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed & obj);

		Fixed & operator =  (const Fixed & obj);

		bool	operator >  (const Fixed & obj) const;
		bool	operator <  (const Fixed & obj) const;
		bool	operator <= (const Fixed & obj) const;
		bool	operator >= (const Fixed & obj) const;
		bool	operator == (const Fixed & obj) const;
		bool	operator != (const Fixed & obj) const;

		Fixed	operator *  (const Fixed & obj) const;
		Fixed	operator /  (const Fixed & obj) const;
		Fixed	operator -  (const Fixed & obj) const;
		Fixed	operator +  (const Fixed & obj) const;

		Fixed & operator ++ ();
		Fixed & operator -- ();

		Fixed	operator ++ (int);
		Fixed 	operator -- (int);

		int			getRawBits(void) const;
		void		setRawBits(const int val);
		int			toInt(void) const;
		float		toFloat(void) const;

		static Fixed & min(Fixed & a, Fixed & b);
		static Fixed & max(Fixed & a, Fixed & b);

		const static Fixed & min(const Fixed & a, const Fixed & b);
		const static Fixed & max(const Fixed & a, const Fixed & b);

	private:
		int					_value;
		const static int	_franctionalBits = 8;
};

#endif