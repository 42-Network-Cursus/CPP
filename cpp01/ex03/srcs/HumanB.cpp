/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:00:12 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/08 15:42:53 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(nullptr)
{
	setName(name);
}

HumanB::~HumanB(void)
{

}

void	HumanB::attack()
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with " << _weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with their fists" << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::setName(std::string name)
{
	this->_name = name;
}