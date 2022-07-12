/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:04:15 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/12 13:40:16 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{

}

Harl::~Harl(void)
{

}

void	Harl::debug(void)
{
	std::cout << "--- DEBUG ---" << std::endl;
	std::cout << "Some debug message" << std::endl << std::endl;

}

void	Harl::info(void)
{
	std::cout << "--- INFO ---" << std::endl;
	std::cout << "Some info message" << std::endl << std::endl;

}

void	Harl::warning(void)
{
	std::cout <<  "--- WARNING ---" << std::endl;
	std::cout << "Some warning message" << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "--- ERROR ---" << std::endl;
	std::cout << "Some error message" << std::endl << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	complainLevels[] = 
	{
		"debug",
		"info",
		"warning",
		"error"
	};

	void	(Harl::*ptrToLevelFct[])() = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; i++)
	{
		void	(Harl::*selectLevel)() = ptrToLevelFct[i];
		if (level == complainLevels[i])
			(this->*selectLevel)();
	}
}