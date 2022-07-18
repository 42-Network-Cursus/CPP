/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:25:33 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/08 15:50:04 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/***********************/
/* --- CONSTRUCTORS ---*/
/***********************/

Fixed::Fixed(void) : _fixedNumber(0)
{
	#ifdef ANNOUNCE
		std::cout << "Default constructor called" << std::endl;
	#endif
}

Fixed::Fixed(const int intNumber)
{
	this->_fixedNumber = intNumber << this->_bits;
	#ifdef ANNOUNCE
		std::cout << "Int constructor called" << std::endl;
	#endif
}

Fixed::Fixed(const float floatNumber)
{
	int power = pow(2, this->_bits);
	this->_fixedNumber = roundf(floatNumber * power);
	#ifdef ANNOUNCE
		std::cout << "Float constructor called" <<  std::endl;
	#endif
}

/***************************/
/* --- COPY CONSTRUCTOR ---*/
/***************************/

Fixed::Fixed(Fixed const & copy)
{
	#ifdef ANNOUNCE
		std::cout << "Copy constructor called" << std::endl;
	#endif
	*this = copy;
}

/************************/
/* --- DECONSTRUCTOR ---*/
/************************/

Fixed::~Fixed(void)
{
	#ifdef ANNOUNCE
		std::cout << "Deconstructor called" << std::endl;
	#endif
}

/****************************/
/* --- OPERATOR OVERLOAD ---*/
/****************************/

Fixed& Fixed::operator=(Fixed const & fixed)
{
	#ifdef ANNOUNCE
		std::cout << "Copy assignment operator called" << std::endl;
	#endif
	this->_fixedNumber = fixed.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, Fixed const & fixed)
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

const Fixed	Fixed::min(Fixed const & a, Fixed const & b)
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

const Fixed	Fixed::max(Fixed const & a, Fixed const & b)
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
