#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"


class	Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		~Point();
		Point();
		Point(const float val_1, const float val_2);
		Point(const Point & obj);
		Point & operator = (const Point & obj);

		float	get_y(void);
		float	get_x(void);
};

#endif
