/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:24:01 by cwastche          #+#    #+#             */
/*   Updated: 2022/06/29 13:24:43 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

/***********************/
/* --- CONSTRUCTORS ---*/
/***********************/

Fixed::Fixed(void) : _fixedNumber(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intNumber)
{
	this->_fixedNumber = intNumber << _bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatNumber)
{
	int power = myPow(2, _bits);
	this->_fixedNumber = roundf(floatNumber * power);
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

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedNumber = fixed._fixedNumber;
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
