#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main(void) 
{
	Point a(0, 0);
	Point b(0, 5);
	Point c(5, 0);
	Point p(2, 2);

	std::cout << "For given triangle abc," << std::endl;
	std::cout << "a coordinates = " << a;
	std::cout << "b coordinates = " << b;
	std::cout << "c coordinates = " << c;
	std::cout << "Given Point p," << std::endl;
	std::cout << "p coordinates = " << p;
	if (bsp(a, b, c, p))
		std::cout << "is part of the triangle" << std::endl;
	else
		std::cout << "is not part of the triangle" << std::endl;
	return 0;
}
