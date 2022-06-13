#include "Fixed.hpp"
#include <iostream>

/***********************/
/* --- CONSTRUCTORS ---*/
/***********************/

Fixed::Fixed(void) : _fixedNumber(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intNumber)
{
	_fixedNumber = intNumber << _bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatNumber)
{
	int power = myPow(2, _bits);
	_fixedNumber = roundf(floatNumber * power);
	std::cout << "Float constructor called" <<  std::endl;
}

/***************************/
/* --- COPY CONSTRUCTOR ---*/
/***************************/

Fixed::Fixed(const Fixed& copy) : _fixedNumber(copy._fixedNumber)
{
	std::cout << "Copy constructor called" << std::endl;
}

/************************/
/* --- DECONSTRUCTOR ---*/
/************************/

Fixed::~Fixed(void)
{
	std::cout << "Deconstructor called" << std::endl;
}

/****************************/
/* --- OPERATOR OVERLOAD ---*/
/****************************/

Fixed& Fixed::operator =(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fixedNumber = fixed._fixedNumber;
	return (*this);
}

std::ostream&	operator <<(std::ostream& oStream, const Fixed& toPrint)
{
	//do something with floats
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
