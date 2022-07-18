/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:23:05 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/18 13:40:01 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					_fixedNumber;
	static int	const	_bits = 8;
public:
	Fixed(void); //Default constructor
	Fixed(Fixed const & rhs); //Copy constructor
	~Fixed(void); //Deconstructor
	Fixed&	operator=(Fixed const & rhs); //Overloaded assignment operator

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif