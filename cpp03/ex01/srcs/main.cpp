/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:37:05 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/08 15:52:25 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	{
		std::cout << "--------------" << std::endl;
		std::cout << "--- ATTACK ---" << std::endl;
		std::cout << "--------------" << std::endl << std::endl;

		ScavTrap trap("Trappy");
		ScavTrap copy;

		for (int i = 0; i < 3; i++)
			trap.attack("Jeff");

		copy = trap;
		for (int i = 0; i < 3; i++)
			copy.attack("Alfred");
	}
	{
		std::cout << std::endl;
		std::cout << "-------------------" << std::endl;
		std::cout << "--- TAKE DAMAGE ---" << std::endl;
		std::cout << "-------------------" << std::endl;

		ScavTrap trap;

		for (int i = 0; i <= 4; i++)
		{
			trap.attack("Jeff");
			trap.takeDamage(30);
		}
	}
	{
		std::cout << std::endl;
		std::cout << "--------------" << std::endl;
		std::cout << "--- REPAIR ---" << std::endl;
		std::cout << "--------------" << std::endl;

		ScavTrap trap("HealBot");

		for (int i = 0; i <= 4; i++)
		{
			trap.takeDamage(30);
			trap.beRepaired(5);
		}
	}
	{
		std::cout << std::endl;
		std::cout << "------------------" << std::endl;
		std::cout << "--- GUARD GATE ---" << std::endl;
		std::cout << "------------------" << std::endl;

		ScavTrap trap("Jeff");
		for (int i = 0; i < 5; i++)
			trap.guardGate();
		trap.takeDamage(200);
		trap.guardGate();
	}
	return (0);
}