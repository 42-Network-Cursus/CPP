/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:55:04 by cwastche          #+#    #+#             */
/*   Updated: 2022/06/29 16:11:24 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <string>
#include <iostream>

/*********************/
/* --- CONSTRUCT --- */
/*********************/

DiamondTrap::DiamondTrap(void)
{
	announce("* DiamondTrap default constructor called *");
	this->_name = "UnnamedDiamondTrap";
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}
	

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	announce("* DiamondTrap copy constructor called *");
	*this = copy;
}

DiamondTrap::DiamondTrap(std::string name)
{
	
	announce("* DiamondTrap name constructor called *");
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap(void)
{
	announce("* DiamondTrap deconstructor called *");
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& DiamondTrap)
{
	announce("* DiamondTrap Assignment operator called *");
	ClapTrap::operator=(DiamondTrap);
	return (*this);
}

/****************************/
/* --- MEMBER FUNCTIONS --- */
/****************************/

void	DiamondTrap::whoAmI()
{
	std::cout << "I am " << this->_name << " and my clap name is " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}