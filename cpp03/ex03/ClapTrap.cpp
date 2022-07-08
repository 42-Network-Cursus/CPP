/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:23:46 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/08 15:53:38 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*********************/
/* --- CONSTRUCT --- */
/*********************/

ClapTrap::ClapTrap()
{
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	this->_name = "Unnamed trap";
	announce("* Default ClapTrap constructor called *");
}

ClapTrap::ClapTrap(std::string name)
{
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	this->_name = name;
	announce("* Name ClapTrap constructor called *");
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	announce("* Copy ClapTrap constructor called *");
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	announce("* ClapTrap Deconstructor called *");
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
	announce("* ClapTrap Assignment operator called *");
	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attackDamage = clapTrap._attackDamage;
	return (*this);
}

/****************************/
/* --- MEMBER FUNCTIONS --- */
/****************************/

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 and this->_hitPoints > 0)
	{
		std::cout << this->_name << " attacks " << target << std::endl;
		std::cout << target << " loses " << this->_attackDamage << " hit points" << std::endl;
		this->_energyPoints -=  1;
	}
	else if (this->_hitPoints <= 0)
		std::cout << this->_name << " is already dead. Leave it alone!" << std::endl << std::endl;
	else
	{
		std::cout << this->_name << " cannot attack" << std::endl;
		std::cout << "Energy points left: " << this->_energyPoints << std::endl << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints = this->_hitPoints - amount;
		std::cout << this->_name << " gets attacked" << std::endl;
		std::cout << this->_name << " loses " << amount << " hit points" << std::endl;
		if (this->_hitPoints <= 0)
			std::cout << this->_name << " died of its injuries" << std::endl;
		else
			std::cout << this->_name << " has " << this->_hitPoints << " hit points remaining" << std::endl;
		std::cout << std::endl;
	}
	else
		std::cout << this->_name << " is already dead. Leave it alone!" << std::endl << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints = this->_hitPoints + amount;
		std::cout << this->_name << " gets repaired" << std::endl;
		std::cout << this->_name << " gains " << amount << " hit points" << std::endl;
		std::cout << this->_name << " has " << this->_hitPoints << " hit points remaining" << std::endl;
		std::cout << std::endl;
	}
	else
		std::cout << this->_name << " is already dead. Leave it alone!" << std::endl << std::endl;
}

/** ANNOUNCE CONSTRUCT **/

void	announce(std::string message)
{
	#ifdef ANNOUNCE
		std::cout << message << std::endl;
	#endif
}