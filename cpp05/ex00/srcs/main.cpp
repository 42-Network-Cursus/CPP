/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:24:48 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/09 10:09:39 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b1("Jay", 200);

	std::cout << b1;
	b1.promoteBureaucrat();
	b1.demoteBureaucrat();
	b1.demoteBureaucrat();

	std::cout << std::endl;
	Bureaucrat b2("Helen", 120);

	std::cout << b2;
	b2.promoteBureaucrat();
	b2.demoteBureaucrat();
	b2.demoteBureaucrat();

	std::cout << std::endl;
	Bureaucrat b3("Doug", 0);

	std::cout << b3;
	b3.promoteBureaucrat();
	b3.demoteBureaucrat();
	b3.promoteBureaucrat();

	std::cout << std::endl;
	Bureaucrat b4("Bruno", 2);

	std::cout << b4;
	b4.promoteBureaucrat();
	b4.promoteBureaucrat();
	b4.demoteBureaucrat();
	return (0);
}