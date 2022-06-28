#include "Point.hpp"

Point	getVector(Fixed x, Fixed y)
{
	Point ret(x.getRawBits(), y.getRawBits());
	return (ret);
}

bool isPointOnLine(Point p, Point v1, Point v2)
{
    if (v2.getX() == 0) {
        return p.getX() == v1.getX();
    }
    if (v2.getY() == 0) {
        return p.getY() == v1.getY();
    }
    return (v1.getX() - p.getX()) / v1.getX() == (v1.getY() - p.getY()) / v2.getY(); 
}

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	//Using dotproduct between two vectors, resulting in a scalar value
	Point	PA = getVector(p.getX() - a.getX(), p.getY() - a.getY());
	Point	PB = getVector(p.getX() - b.getX(), p.getY() - b.getY());
	Point	PC = getVector(p.getX() - c.getX(), p.getY() - c.getY());
	Point	AB = getVector(a.getY() - b.getY(), b.getX() - a.getX());
	Point	BC = getVector(b.getY() - c.getY(), c.getX() - b.getX());
	Point	CA = getVector(c.getY() - a.getY(), a.getX() - c.getX());

	bool b1 = ( PA * AB > 0);
	bool b2 = ( PB * BC > 0);
	bool b3 = ( PC * CA > 0);

	if (isPointOnLine(p, a, AB) || isPointOnLine(p, b, BC) || isPointOnLine(p, c, CA))
		return (false);
	return (b1 == b2 && b2 == b3);
}