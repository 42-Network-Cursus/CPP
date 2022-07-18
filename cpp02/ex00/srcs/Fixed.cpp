/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:22:38 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/18 13:40:30 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedNumber(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedNumber = rhs.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Deconstructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedNumber = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedNumber);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedNumber = raw;
}