/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:15:50 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/12 11:15:51 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "* WrongAnimal default constructor called *" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "* WrongAnimal default deconstructor called *" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& WrongAnimal)
{
	*this = WrongAnimal;
	std::cout << "* WrongAnimal copy constructor called *" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& WrongAnimal)
{
	std::cout << "* WrongAnimal assignment operator called *" << std::endl;
	this->type = WrongAnimal.type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sounds..." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}