/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:24:19 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/18 10:12:42 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_fixedNumber;
	static int const	_bits = 8;
public:
	Fixed(void); //Default constructor
	Fixed(Fixed const & copy); //Copy constructor
	~Fixed(void); //Deconstructor
	Fixed&	operator=(Fixed const & fixed); //Overloaded assignment operator

	Fixed(int const intNumber);
	Fixed(float const floatNumber); 

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& os, Fixed const & fixed);
int	myPow(int base, int power);

#endif