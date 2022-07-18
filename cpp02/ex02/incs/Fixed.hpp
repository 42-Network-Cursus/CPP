/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:26:12 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/18 13:49:49 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

//# define ANNOUNCE //Comment line to remove constuction announcements

class Fixed
{
private:
	int					_fixedNumber;
	const static int	_bits = 8;
public:
	Fixed(void); //Default constructor
	Fixed(const Fixed& copy); //Copy constructor
	~Fixed(void); //Deconstructor
	Fixed&	operator=(Fixed const & fixed); //Overloaded assignment operator

	Fixed(const int intNumber);
	Fixed(const float floatNumber); 

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

	bool operator>(Fixed const & fixed) const;
	bool operator<(Fixed const & fixed) const;
	bool operator>=(Fixed const & fixed) const;
	bool operator<=(Fixed const & fixed) const;
	bool operator==(Fixed const & fixed) const;
	bool operator!=(Fixed const & fixed) const;

	Fixed operator+(Fixed const & fixed);
	Fixed operator-(Fixed const & fixed);
	Fixed operator*(Fixed const & fixed);
	Fixed operator/(Fixed const & fixed);

	//How do they work ???
	Fixed& operator++(void); //prefix
	Fixed operator++(int zero); //postfix
	Fixed& operator--(void); //prefix
	Fixed operator--(int zero); //postfix

	static Fixed		min(Fixed& a, Fixed& b);
	static const Fixed	min(Fixed const & a, Fixed const & b);
	static Fixed		max(Fixed& a, Fixed& b);
	static const Fixed	max(Fixed const & a, Fixed const & b);
};

std::ostream&	operator<<(std::ostream& os, Fixed const & fixed);
int	myPow(int base, int power);

#endif