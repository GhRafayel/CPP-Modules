#include "Point.hpp"

Point::~Point() {print_str("Distractor", 1);}

Point::Point() : x(0), y(0) {print_str("Defoult", 1);}

Point::Point(const float val_1, const float val_2) :  x(val_1),  y(val_2) {print_str("Float", 1);}

Point::Point(const Point & obj) : x(obj.x), y(obj.y) {print_str("Copy", 1);}

Point & Point::operator = (const Point & obj)
{

    (void)obj; return *this;
}

float Point::get_x(void)
{
    return this->x.toFloat();
}

float Point::get_y(void)
{
    return this->y.toFloat();
}