#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	//Default constructor
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	//Constructor with params
}

Point::Point(const Point& copy) : _x(copy._x), _y(copy._y)
{
	//Copy constructor
}

Point::~Point()
{
	//Deconstructor
}

const Fixed& Point::getX(void) const
{
	return (this->_x);
}

const Fixed& Point::getY(void) const
{
	return (this->_y);
}

Point& Point::operator=(Point const& point)
{
	this->_x = point._x;
	this->_y = point._y;
	return (*this);
}

std::ostream&	operator <<(std::ostream& oStream, Point const& point)
{
	Fixed x(point.getX());
	Fixed y(point.getY());
	oStream << "(" << x.getRawBits() << "," << y.getRawBits() << ")" << std::endl;
	return (oStream);
}
