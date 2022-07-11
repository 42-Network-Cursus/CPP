/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:24:48 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/09 13:04:37 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <unistd.h>
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		ShrubberyCreationForm shForm("ShrubTarget");
		std::cout << shForm;
		std::cout << "Target: " << shForm.getTarget() << std::endl;
		Bureaucrat bcrat1("Jay", 1);
		try
		{
			shForm.execute(bcrat1);
		}
		catch (std::exception& e)
		{
			std::cout << "Execute exception: " << e.what() << std::endl;
		}
		bcrat1.signForm(shForm);
		try
		{
			shForm.execute(bcrat1);
		}
		catch (std::exception& e)
		{
			std::cout << "Execute exception: " << e.what() << std::endl;
		}
		
		Bureaucrat bcrat2("Oliver", 150);
		try
		{
			shForm.execute(bcrat2);
		}
		catch (std::exception& e)
		{
			std::cout << "Execute exception: " << e.what() << std::endl;
		}
	}
	// {
	// 	std::cout << "---------------------" <<std::endl;
	// 	RobotomyRequestForm rob2("RoboTarget");
	// 	std::cout << rob2;
	// 	std::cout << "Target: " << rob2.getTarget() << std::endl;
	// 	Bureaucrat b3("Jay", 1);
	// 	rob2.execute(b3);
	// 	Bureaucrat b4("Oliver", 150);
	// 	for (int i = 0; i < 5; i++)
	// 	{
	// 		sleep(1);
	// 		rob2.execute(b4);
	// 	}
	// }
	// {
	// 	std::cout << "---------------------" <<std::endl;
	// 	PresidentialPardonForm p("Turtle");
	// 	std::cout << p;
	// 	std::cout << "Target: " << p.getTarget() << std::endl;
	// 	Bureaucrat b5("Jay", 1);
	// 	try
	// 	{
	// 		p.execute(b5);
	// 	}
	// 	catch (std::exception& e)
	// 	{
	// 		std::cout << e.what() << std::endl;
	// 	}
	// 	Bureaucrat b6("Oliver", 150);
	// 	try
	// 	{
	// 		p.execute(b6);
	// 	}
	// 	catch (std::exception& e)
	// 	{
	// 		std::cout << e.what() << std::endl;
	// 	}
	// }
return (0);
}