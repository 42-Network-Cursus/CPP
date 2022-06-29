/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:44:37 by cwastche          #+#    #+#             */
/*   Updated: 2022/06/29 15:50:25 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>

/*********************/
/* --- CONSTRUCT --- */
/*********************/

FragTrap::FragTrap(void)
{
	this->_name = "Unnamed FragTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	announce("* FragTrap default constructor called *");
}

FragTrap::FragTrap(const FragTrap& copy)
{
	*this = copy;
	announce("* FragTrap copy constructor called *");
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	announce("* FragTrap name constructor called *");
}

FragTrap::~FragTrap(void)
{
	announce("* FragTrap deconstructor called *");
}

FragTrap&	FragTrap::operator=(const FragTrap& FragTrap)
{
	announce("* FragTrap Assignment operator called *");
	ClapTrap::operator=(FragTrap);
	return (*this);
}

/****************************/
/* --- MEMBER FUNCTIONS --- */
/****************************/

void FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " would like to high five you. In the face. If that's okay with you of course :)." << std::endl;
}
