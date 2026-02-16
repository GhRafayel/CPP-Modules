#include "Point.hpp"

void    print_str(std::string str, int i)
{
	return ;
    if (i == 1)
        std::cout << "\033[33m" << str << " constructor called" << std::endl;
    else if ( i == 2)
        std::cout << "\033[32m" << str << " operator called" << std::endl;
    else if (i == 3)
        std::cout << "\033[34m" << str << " member function called" << std::endl;

    std::cout << "\033[0m";
}

float   get_area(Point a, Point b, Point c)
{
    float area = a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y());

    if (area < 0) area *= -1;

    return (area / 2);
}

bool bsp(Point a, Point b, Point c, Point p)
{
	float big = get_area(a,b,c);

	float pab = get_area(p,a,b);
	float pbc = get_area(p,b,c);
	float pca = get_area(p,c,a);
	float res = pab + pbc + pca;

	if (pab == 0 || pbc == 0 || pca == 0 || big != res) return false;
	
	return true;
}

int main(void)
{
    Point a(1,1);
    Point b(5,1);
    Point c(3,5);

    Point p1(3,2); // P should be inside 
    std::cout << "P1(3,2): "  << (bsp(a,b,c,p1) ? "inside" : "outside") << std::endl;

    Point p2(6,4); // p should be outside 
    std::cout << "P2(6,4): "  << (bsp(a,b,c,p2) ? "inside" : "outside") << std::endl;

    Point p3(1,1); // p should be outside 
    std::cout << "P3(1,1): "  << (bsp(a,b,c,p3) ? "inside" : "outside") << std::endl;

    Point p4(2,1); // p should be outside 
    std::cout << "P4(2,1): " << (bsp(a,b,c,p4) ? "inside" : "outside") << std::endl;

    Point p5(2.5,3); // P should be inside 
    std::cout << "P5(2.5,3): " << (bsp(a,b,c,p5) ? "inside" : "outside") << std::endl;

    return 0;
}