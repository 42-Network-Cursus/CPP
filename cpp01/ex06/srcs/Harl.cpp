/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:19:45 by cwastche          #+#    #+#             */
/*   Updated: 2022/08/21 16:22:13 by cwastche         ###   ########.fr       */
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

int	levelFilter(std::string level)
{
	std::string filterlvl[] =
	{
		"default",
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 1; i < 5; i++)
	{
		if (level == filterlvl[i])
			return (i);
	}
	return (0);
}

void	Harl::complain(std::string level)
{

	std::map

	var <int><string>

	enum elvl
	{
		DEBUG = 1,
		INFO,
		WARNING,
		ERROR
	};

	switch (levelFilter(level))
	{
		case DEBUG:
			this->debug();
		case INFO:
			this->info();
		case WARNING:
			this->warning();
		case ERROR:
			this->error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}