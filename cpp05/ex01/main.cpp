/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:24:48 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/09 11:53:24 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Form f1;
	std::cout << f1 << std::endl;
	Bureaucrat b1("Joe", 1);
	f1.beSigned(b1);
	std::cout << f1 << std::endl;

	Form f2("Contract1", 120, 66);
	std::cout << f2 << std::endl;
	Bureaucrat b2("Gary", 150);
	f2.beSigned(b2);
	std::cout << f2 << std::endl;

	try
	{
		Form f3("Contract2", 200, 20);
		std::cout << f3 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Form f4("Contract3", 33, 200);
		std::cout << f4 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form f5("Contract4", -20, 20);
		std::cout << f5 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form f6("Contract5", 54, 0);
		std::cout << f6 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}