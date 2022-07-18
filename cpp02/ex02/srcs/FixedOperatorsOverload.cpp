/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedOperatorsOverload.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:26:16 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/18 13:50:09 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**************************/
/* INCREMENT && DECREMENT */
/**************************/

//To distinguish between the two, 
//the following rule is observed: 
//The prefix form of the operator is declared 
//exactly the same way as any other unary operator; 
//the postfix form accepts an extra argument of type int.

Fixed& Fixed::operator++(void) //prefix
{
	this->_fixedNumber++;
	return (*this);
}

//Example: value of var A is 1
Fixed Fixed::operator++(int zero) //postfix
{
	(void)zero;
	Fixed old(*this); // new var B takes current value of var A= 1
	operator++(); //operator is called on 'this' of var A, thus var A = 2 
	return (old); //return var B still = 1
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

Fixed Fixed::operator+(Fixed const & fixed)
{
	Fixed ret;
	ret.setRawBits(this->_fixedNumber + fixed.getRawBits());
	return (ret);

}

Fixed Fixed::operator-(Fixed const & fixed)
{
	Fixed ret;
	ret.setRawBits(this->_fixedNumber - fixed.getRawBits());
	return (ret);
}

Fixed Fixed::operator*(Fixed const & fixed)
{
	Fixed ret(this->toFloat() * fixed.toFloat());
	return (ret);
}

Fixed Fixed::operator/(Fixed const & fixed)
{
	Fixed ret(this->toFloat() / fixed.toFloat());
	return (ret);
}

/************************/
/* COMPARING OPERATIONS */
/************************/

bool Fixed::operator>(Fixed const & fixed) const
{
	if (this->_fixedNumber > fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(Fixed const & fixed) const
{
	if (this->_fixedNumber < fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(Fixed const & fixed) const
{
	if (this->_fixedNumber >= fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(Fixed const & fixed) const
{
	if (this->_fixedNumber <= fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(Fixed const & fixed) const
{
	if (this->_fixedNumber == fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(Fixed const & fixed) const
{
	if (this->_fixedNumber != fixed.getRawBits())
		return (true);
	return (false);
}
