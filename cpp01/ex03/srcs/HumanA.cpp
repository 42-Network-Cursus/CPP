/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:59:19 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/12 10:49:51 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon), _name(name)
{
	//Constructor
}

HumanA::~HumanA(void)
{
	//Deconstructor
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
}