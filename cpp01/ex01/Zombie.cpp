/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:55:41 by cwastche          #+#    #+#             */
/*   Updated: 2022/06/29 11:57:04 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(void)
{

}

Zombie::~Zombie(void)
{
	std::cout << "Destroying " << _name << std::endl;
}

std::string	Zombie::getName(void)
{
	return (_name);
}

void	Zombie::setName(std::string newName)
{
	_name = newName;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}