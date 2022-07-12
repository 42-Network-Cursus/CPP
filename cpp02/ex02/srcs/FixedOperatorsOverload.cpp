/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedOperatorsOverload.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:26:16 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/12 11:03:49 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**************************/
/* INCREMENT && DECREMENT */
/**************************/

Fixed& Fixed::operator++(void) //prefix
{
	this->_fixedNumber++;
	return (*this);
}

Fixed Fixed::operator++(int zero) //postfix
{
	(void)zero;
	Fixed old(*this);
	operator++();
	return (old);
}

Fixed& Fixed::operator--(void) //prefix
{
	this->_fixedNumber--;
	return (*this);
}

Fixed Fixed::operator--(int zero) //postfix
{
	(void)zero;
	Fixed old(*this);
	operator--();
	return (old);
}

/*************************/
/* ARITHMETIC OPERATIONS */
/*************************/

Fixed Fixed::operator+(const Fixed& fixed)
{
	Fixed ret;
	ret.setRawBits(this->_fixedNumber + fixed.getRawBits());
	return (ret);

}

Fixed Fixed::operator-(const Fixed& fixed)
{
	Fixed ret;
	ret.setRawBits(this->_fixedNumber - fixed.getRawBits());
	return (ret);
}

Fixed Fixed::operator*(const Fixed& fixed)
{
	Fixed ret(this->toFloat() * fixed.toFloat());
	return (ret);
}

Fixed Fixed::operator/(const Fixed& fixed)
{
	Fixed ret(this->toFloat() / fixed.toFloat());
	return (ret);
}

/************************/
/* COMPARING OPERATIONS */
/************************/

bool Fixed::operator>(const Fixed& fixed) const
{
	if (this->_fixedNumber > fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed& fixed) const
{
	if (this->_fixedNumber < fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& fixed) const
{
	if (this->_fixedNumber >= fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& fixed) const
{
	if (this->_fixedNumber <= fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed& fixed) const
{
	if (this->_fixedNumber == fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& fixed) const
{
	if (this->_fixedNumber != fixed.getRawBits())
		return (true);
	return (false);
}
