#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	const Fixed _x;
	const Fixed _y;
public:
	Point();
	Point(const float x, const float y);
	Point(const Point& copy);
	~Point(void);

	Point& operator=(Point const& point);
	const Fixed& getX() const;
	const Fixed& getY() const;


};

std::ostream&	operator <<(std::ostream& oStream, Point const& point);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif