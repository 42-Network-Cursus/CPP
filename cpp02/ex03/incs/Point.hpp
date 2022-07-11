/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:38:23 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/08 15:50:43 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>
class Point
{
private:
	const Fixed _x;
	const Fixed _y;
public:
	Point();
	Point(const float x, const float y);
	Point(const Point& copy);
	~Point(void);

	Point& operator=(Point const& point);
	const Fixed& getX() const;
	const Fixed& getY() const;

	float	operator*(Point const& point) const;
};

std::ostream&	operator<<(std::ostream& os, Point const& point);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif