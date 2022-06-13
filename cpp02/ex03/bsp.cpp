#include "Point.hpp"

//  vectors a = [xa, ya] , b = [xb, yb]

// angle = arccos[(xa * xb + ya * yb) / (√(xa2 + ya2) * √(xb2 + yb2))]

// Vector AB = (bx, by) - (ax, ay) 

float	getAngleValue(Point& vA, Point& vB)
{
	float ret;
	Fixed vAx = vA.getX();
	Fixed vAy = vB.getY();
	Fixed vBx = vB.getX();
	Fixed vBy = vB.getY();

	ret = acos((vAx * vBx + vAy * vBy) / (sqrt(pow(2, vAx.getRawBits) + pow(2, vAy.getRawBits)) * sqrt(pow(2, vBx.getRawBits) + pow(2, vBy.getRawBits))));
	return (ret);
}

Point&	convertToVector(Point const a, Point const b)
{
	Point ret;
	Fixed ax(a.getX);
	Fixed ay(a.getY);
	Fixed bx(b.getX);
	Fixed by(b.getY);
	ret._x = bx - ax;
	ret._y = by - ay;
	return (ret);
}

bool bsp(Point const a, Point const b, Point const c, Point const point);
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
	const float PI = 3.1415927

	if ((angle1 + angle2 + angle3) == 2 * PI)
		return true;
	else
		return false;
}





// int CrossProduct(Point& a, Point& b)
// {
// 	int ret;

// 	ret = a.get_xValue() * b.get_yValue() - a.get_yValue() * a.get_xValue();
// 	return (ret);
// }

// int	DotProduct(int cp1, int cp2)
// {
// 	if ((cp1 > 0 and cp2 > 0) or (cp1 < 0 and cp2 < 0))
// 		return true;
// 	else
// 		return false;
// }

// bool SameSide(Point const p, Point const ref, Point const peak1, Point const peak2)
// {
//     cp1 = CrossProduct(peak2 - peak1, p - peak1)
//     cp2 = CrossProduct(peak2 - peak1, ref - peak1)
//     return (DotProduct(cp1, cp2));
// }

// function PointInTriangle(p, a,b,c)
//     if SameSide(p,a, b,c) and SameSide(p,b, a,c)
//         and SameSide(p,c, a,b) then return true
//     else return false

// bool bsp(Point const a, Point const b, Point const c, Point const point);
// {
// 	if (SameSide(point, a, b, c) and SameSide(point, b, a, c)
// 		and SameSide(point , c, a, b))
// 		return true
//     else 
// 		return false
// }