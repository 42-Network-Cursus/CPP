/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:37:09 by cwastche          #+#    #+#             */
/*   Updated: 2022/06/29 15:50:50 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

/*********************/
/* --- CONSTRUCT --- */
/*********************/

ScavTrap::ScavTrap(void)
{
	this->_name = "Unnamed ScavTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_guardMode = false;
	announce("* ScavTrap default constructor called *");
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	*this = copy;
	announce("* ScavTrap copy constructor called *");
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	announce("* ScavTrap name constructor called *");
}

ScavTrap::~ScavTrap(void)
{
	announce("* ScavTrap deconstructor called *");
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& scavTrap)
{
	announce("* ScavTrap Assignment operator called *");
	ClapTrap::operator=(scavTrap);
	return (*this);
}

/****************************/
/* --- MEMBER FUNCTIONS --- */
/****************************/

void 	ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints > 0 and this->_energyPoints > 0)
	{
		std::cout << "(ScavTrap) " << this->_name << " attacks " << target << std::endl;
		std::cout << target << " loses " << this->_attackDamage << " hit points" << std::endl;
		ClapTrap::useEnergyPoint(this->_energyPoints);
	}
	else if (this->_hitPoints <= 0)
		std::cout << "(ScavTrap) " << this->_name << " is already dead. Leave it alone!" << std::endl << std::endl;
	else
	{
		std::cout << "(ScavTrap) " << this->_name << " cannot attack" << std::endl;
		std::cout << "Energy points left: " << this->_energyPoints << std::endl << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	if (this->_hitPoints <= 0)
		std::cout << "(ScavTrap) " << this->_name << " is already dead. Leave it alone!" << std::endl << std::endl;
	else if (this->_energyPoints <= 0)
	{
		std::cout << "(ScavTrap) " << this->_name << " cannot attack" << std::endl;
		std::cout << "Energy points left: " << this->_energyPoints << std::endl << std::endl;
	}
	else
	{
		if (this->_guardMode)
		{
			this->_guardMode = false;
			std::cout << this->_name << ": Guard mode turned OFF" << std::endl;
		}
		else
		{
			this->_guardMode = true;
			std::cout << this->_name << ": Guard mode turned ON" << std::endl;
		}
	}
}
