#include "Fixed.hpp"
#include <iostream>

/***********************/
/* --- CONSTRUCTORS ---*/
/***********************/

Fixed::Fixed(void) : _fixedNumber(0)
{
	if (_msg)
		std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intNumber)
{
	_fixedNumber = intNumber << _bits;
	if (_msg)
		std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatNumber)
{
	int power = pow(2, _bits);
	_fixedNumber = roundf(floatNumber * power);
	if (_msg)
		std::cout << "Float constructor called" <<  std::endl;
}

/***************************/
/* --- COPY CONSTRUCTOR ---*/
/***************************/

Fixed::Fixed(const Fixed& copy) : _fixedNumber(copy._fixedNumber)
{
	if (_msg)
		std::cout << "Copy constructor called" << std::endl;
}

/************************/
/* --- DECONSTRUCTOR ---*/
/************************/

Fixed::~Fixed(void)
{
	if (_msg)
		std::cout << "Deconstructor called" << std::endl;
}

/****************************/
/* --- OPERATOR OVERLOAD ---*/
/****************************/

Fixed& Fixed::operator =(const Fixed& fixed)
{
	if (_msg)
		std::cout << "Copy assignment operator called" << std::endl;
	_fixedNumber = fixed._fixedNumber;
	return (*this);
}

std::ostream&	operator <<(std::ostream& oStream, const Fixed& toPrint)
{
	oStream << toPrint.toFloat() << std::endl;
	return (oStream);
} 

/****************************/
/* --- MEMBER FUNCTIONS ---*/
/****************************/

int	Fixed::getRawBits(void) const
{
	return (this->_fixedNumber);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedNumber = raw;
}

float	Fixed::toFloat(void) const
{
	float power = myPow(2, _bits);
	return ((_fixedNumber / power));
}

int		Fixed::toInt(void) const
{
	return (_fixedNumber >> _bits);
}

Fixed	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed	Fixed::max(Fixed& a, Fixed& b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

const Fixed	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

/****************************/
/*      --- OTHERS ---      */
/****************************/

int	myPow(int base, int power)
{
	int ret = 1;

	for (int i = 0; i < power; i++)
		ret *= base;
	return (ret);
}
