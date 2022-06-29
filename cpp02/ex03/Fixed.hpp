/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:35:40 by cwastche          #+#    #+#             */
/*   Updated: 2022/06/29 13:41:05 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

//#define ANNOUNCE //Comment line to remove constuction announcements

class Fixed
{
private:
	int					_fixedNumber;
	const static int	_bits = 8;
public:
	Fixed(void); //Default constructor
	Fixed(const Fixed& copy); //Copy constructor
	~Fixed(void); //Deconstructor
	Fixed&	operator=(const Fixed& fixed); //Overloaded assignment operator
	const Fixed&	operator=(const Fixed& fixed) const;
	
	Fixed(const int intNumber);
	Fixed(const float floatNumber); 

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

	bool operator>(const Fixed& fixed) const;
	bool operator<(const Fixed& fixed) const;
	bool operator>=(const Fixed& fixed) const;
	bool operator<=(const Fixed& fixed) const;
	bool operator==(const Fixed& fixed) const;
	bool operator!=(const Fixed& fixed) const;

	Fixed operator+(const Fixed& fixed);
	Fixed operator-(const Fixed& fixed) const;
	Fixed operator*(const Fixed& fixed) const;
	Fixed operator/(const Fixed& fixed);

	Fixed& operator++(void); //prefix
	Fixed operator++(int zero); //postfix
	Fixed& operator--(void); //prefix
	Fixed operator--(int zero); //postfix

	static Fixed		min(Fixed& a, Fixed& b);
	static const Fixed	min(const Fixed& a, const Fixed& b);
	static Fixed		max(Fixed& a, Fixed& b);
	static const Fixed	max(const Fixed& a, const Fixed& b);
};

std::ostream&	operator<<(std::ostream& os, Fixed const& fixed);
int	myPow(int base, int power);

#endif