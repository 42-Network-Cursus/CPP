/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:09:43 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/23 16:02:54 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->type = "AAnimal";
	std::cout << "* AAnimal default constructor called *" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "* AAnimal default deconstructor called *" << std::endl;
}

AAnimal::AAnimal(const AAnimal& AAnimal)
{
	*this = AAnimal;
	std::cout << "* AAnimal copy constructor called *" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& AAnimal)
{
	std::cout << "* AAnimal assignment operator called *" << std::endl;
	this->type = AAnimal.type;
	return (*this);
}

void	AAnimal::makeSound() const
{
	std::cout << "AAnimal sounds..." << std::endl;
}

std::string	AAnimal::getType() const
{
	return (this->type);
}

void AAnimal::haveIdea(int idx)
{
	(void)idx;
}

void	AAnimal::printBrainAddress()
{
	std::cout << "Animals don't have brains" << std::endl;
}