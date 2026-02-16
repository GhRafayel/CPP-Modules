#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed 
{
	public:
		Fixed(void);
		Fixed(const Fixed & obj);
		Fixed(const int val);
		Fixed(const float val);
		Fixed & operator = (const Fixed & obj);
		~Fixed(void);

		void	setRawBits(const int raw);

		float	toFloat(void)		const;
		int		getRawBits(void)	const;
		int		toInt(void)			const;

	private:
		int					_value;
		static const int	_fractional_bits = 8;
};

#endif