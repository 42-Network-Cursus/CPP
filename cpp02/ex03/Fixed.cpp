#include "Fixed.hpp"
#include <iostream>

/***********************/
/* --- CONSTRUCTORS ---*/
/***********************/

Fixed::Fixed(void) : _fixedNumber(0)
{
	if (this->_msg)
		std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intNumber)
{
	this->_fixedNumber = intNumber << this->_bits;
	if (this->_msg)
		std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatNumber)
{
	int power = pow(2, this->_bits);
	this->_fixedNumber = roundf(floatNumber * power);
	if (this->_msg)
		std::cout << "Float constructor called" <<  std::endl;
}

/***************************/
/* --- COPY CONSTRUCTOR ---*/
/***************************/

Fixed::Fixed(const Fixed& copy) : _fixedNumber(copy._fixedNumber)
{
	if (this->_msg)
		std::cout << "Copy constructor called" << std::endl;
}

/************************/
/* --- DECONSTRUCTOR ---*/
/************************/

Fixed::~Fixed(void)
{
	if (this->_msg)
		std::cout << "Deconstructor called" << std::endl;
}

/****************************/
/* --- OPERATOR OVERLOAD ---*/
/****************************/

Fixed& Fixed::operator=(const Fixed& fixed)
{
	if (this->_msg)
		std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedNumber = fixed._fixedNumber;
	return (*this);
}

const Fixed& Fixed::operator=(const Fixed& fixed) const
{
	if (this->_msg)
		std::cout << "Copy assignment operator called" << std::endl;
	const_cast<Fixed*>(this)->_fixedNumber = fixed._fixedNumber;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat() << std::endl;
	return (os);
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
	float power = myPow(2, this->_bits);
	return ((this->_fixedNumber / power));
}

int		Fixed::toInt(void) const
{
	return (this->_fixedNumber >> this->_bits);
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
