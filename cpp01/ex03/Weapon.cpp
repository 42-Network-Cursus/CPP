/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:01:19 by cwastche          #+#    #+#             */
/*   Updated: 2022/06/29 12:01:31 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::~Weapon(void)
{
	
}

Weapon::Weapon(std::string type)
{
	setType(type);
}

void	Weapon::setType(std::string type)
{
	this->_type	= type;
}

const std::string& Weapon::getType()
{
	return (this->_type);
}