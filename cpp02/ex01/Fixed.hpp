/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:24:19 by cwastche          #+#    #+#             */
/*   Updated: 2022/06/29 13:24:48 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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

	Fixed(const int intNumber);
	Fixed(const float floatNumber); 

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);
int	myPow(int base, int power);

#endif