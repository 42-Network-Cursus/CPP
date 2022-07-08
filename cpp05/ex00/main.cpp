/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:24:48 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/08 16:55:19 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b1("Jay");
	b1.setGrade(150);

	std::cout << b1;
	b1.promoteBureaucrat();
	b1.demoteBureaucrat();
	b1.demoteBureaucrat();

	std::cout << std::endl;
	Bureaucrat b2("Doug");
	b2.setGrade(1);

	std::cout << b2;
	b2.promoteBureaucrat();
	b2.demoteBureaucrat();
	b2.promoteBureaucrat();
	return (0);
}