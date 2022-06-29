/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:38:31 by cwastche          #+#    #+#             */
/*   Updated: 2022/06/29 14:40:57 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	{
		std::cout << "--------------" << std::endl;
		std::cout << "--- ATTACK ---" << std::endl;
		std::cout << "--------------" << std::endl << std::endl;

		ClapTrap trap("Trappy");
		ClapTrap copy;

		std::cout << std::endl;
		for (int i = 0; i < 5; i++)
			trap.attack("Jeff");
		
		copy = trap;
		
		std::cout << std::endl;
		for (int i = 0; i < 6; i++)
			copy.attack("Alfred");
	}
	{
		std::cout << "-------------------" << std::endl;
		std::cout << "--- TAKE DAMAGE ---" << std::endl;
		std::cout << "-------------------" << std::endl;

		ClapTrap trap;

		std::cout << std::endl;
		for (int i = 0; i <= 4; i++)
		{
			trap.attack("Jeff");
			trap.takeDamage(3);
		}
	}
	{
		std::cout << "--------------" << std::endl;
		std::cout << "--- REPAIR ---" << std::endl;
		std::cout << "--------------" << std::endl;

		ClapTrap trap("HealBot");

		std::cout << std::endl;
		for (int i = 0; i <= 3; i++)
		{
			trap.takeDamage(4);
			trap.beRepaired(1);
		}
	}
	return (0);
}