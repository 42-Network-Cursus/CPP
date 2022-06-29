/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:04:15 by cwastche          #+#    #+#             */
/*   Updated: 2022/06/29 12:04:43 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

Harl::Harl(void)
{

}

Harl::~Harl(void)
{

}

void	Harl::debug(void)
{
	std::cout << "DEBUG" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO" << std::endl;
}

void	Harl::warning(void)
{
	std::cout <<  "WARNING" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR" << std::endl;
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