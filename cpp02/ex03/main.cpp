/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:37:37 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/08 15:50:57 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

// Use for visual aid while testing
// https://www.geogebra.org/graphing

int main(void) 
{
	Point a(0, 0);
	Point b(0, 5);
	Point c(5, 0);
	Point p(5, 0);

	std::cout << "Triangle abc:" << std::endl;
	std::cout << "* a coordinates = " << a << std::endl;
	std::cout << "* b coordinates = " << b << std::endl;
	std::cout << "* c coordinates = " << c << std::endl << std::endl;
	std::cout << "Point p" << p;
	if (bsp(a, b, c, p))
		std::cout << " is part of the triangle" << std::endl;
	else
		std::cout << " is not part of the triangle" << std::endl;
	return 0;
}
