/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:09:14 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/23 14:37:32 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "* Animal default constructor called *" << std::endl;
}

Animal::~Animal()
{
	std::cout << "* Animal default deconstructor called *" << std::endl;
}

Animal::Animal(const Animal& Animal)
{
	*this = Animal;
	std::cout << "* Animal copy constructor called *" << std::endl;
}

Animal& Animal::operator=(const Animal& Animal)
{
	std::cout << "* Animal assignment operator called *" << std::endl;
	this->type = Animal.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Animal sounds..." << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}

void Animal::haveIdea(int idx)
{
	(void)idx;
}

void	Animal::printBrainAddress()
{
	std::cout << "Animals don't have brains" << std::endl;
}