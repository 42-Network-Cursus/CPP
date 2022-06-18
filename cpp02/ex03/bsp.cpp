#include "Point.hpp"

//  vectors a = [xa, ya] , b = [xb, yb]

// angle = arccos[(xa * xb + ya * yb) / (√(xa2 + ya2) * √(xb2 + yb2))]

// Vector AB = (bx, by) - (ax, ay) 



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


/*
float	getAngleValue(Point& vA, Point& vB)
{
	float ret;
	Fixed vAx = vA.getX();
	Fixed vAy = vB.getY();
	Fixed vBx = vB.getX();
	Fixed vBy = vB.getY();

	std::cout << "vAx = " << vAx;
	std::cout << "vAy = " << vAy;
	std::cout << "vBx = " << vBx;
	std::cout << "vBy = " << vBy;


	std::cout << "(vAx * vBx + vAy * vBy).getRawBits() = " << (vAx * vBx + vAy * vBy).getRawBits() << std::endl;
	std::cout << "(pow(2, vAx.getRawBits()) = " << pow(2, vAx.getRawBits()) << std::endl;
	std::cout << "pow(2, vAy.getRawBits()) = " << pow(2, vAy.getRawBits()) << std::endl;
	std::cout << "pow(2, vBx.getRawBits() = " << pow(2, vBx.getRawBits()) << std::endl;
	std::cout << " pow(2, vBy.getRawBits() = " << pow(2, vBy.getRawBits()) << std::endl;
	std::cout << "(sqrt(pow(2, vAx.getRawBits()) + pow(2, vAy.getRawBits()) = " << (sqrt(pow(2, vAx.getRawBits()) + pow(2, vAy.getRawBits()))) << std::endl;
	std::cout << "sqrt(pow(2, vBx.getRawBits()) + pow(2, vBy.getRawBits())))))" << sqrt(pow(2, vBx.getRawBits()) + pow(2, vBy.getRawBits())) << std::endl;
	std::cout << "(sqrt(pow(2, vAx.getRawBits()) + pow(2, vAy.getRawBits()) * sqrt(pow(2, vBx.getRawBits()) + pow(2, vBy.getRawBits()))))) = " << (sqrt(pow(2, vAx.getRawBits()) + pow(2, vAy.getRawBits()) * sqrt(pow(2, vBx.getRawBits()) + pow(2, vBy.getRawBits())))) << std::endl;

	ret = acos((vAx * vBx + vAy * vBy).getRawBits() / (sqrt(pow(2, vAx.getRawBits()) + pow(2, vAy.getRawBits()) * sqrt(pow(2, vBx.getRawBits()) + pow(2, vBy.getRawBits())))));
	std::cout << "Angle value = " << ret << std::endl;
	return (ret);
}

Point	convertToVector(Point const a, Point const b)
{
	Fixed ax(a.getX());
	Fixed ay(a.getY());
	Fixed bx(b.getX());
	Fixed by(b.getY());
	Fixed x(bx - ax);
	Fixed y(by - ay);
	Point ret(x.getRawBits(), y.getRawBits());
	return (ret);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point vAB = convertToVector(a, b);
	Point vBC = convertToVector(b, c);
	Point vCA = convertToVector(c, a);
	Point vPA = convertToVector(point, a);
	Point vPB = convertToVector(point, b);
	Point vPC = convertToVector(point, c);

	float angle1 = getAngleValue(vPA, vAB);
	float angle2 = getAngleValue(vPB, vBC);
	float angle3 = getAngleValue(vPC, vCA);
	const float PI = 3.1415927;

	std::cout << "Angles = " << angle1 + angle2 + angle3 << std::endl;
	if ((angle1 + angle2 + angle3) == 2 * PI)
		return true;
	else
		return false;
}
*/