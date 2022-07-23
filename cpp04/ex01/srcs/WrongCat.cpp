/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:09:26 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/23 11:09:27 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "* WrongCat default constructor called *" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "* WrongCat default deconstructor called *" << std::endl;
}

WrongCat::WrongCat(const WrongCat& WrongCat) : WrongAnimal()
{
	*this = WrongCat;
	std::cout << "* WrongCat copy constructor called *" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& WrongCat)
{
	std::cout << "* WrongCat assignment operator called *" << std::endl;
	this->type = WrongCat.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat sounds..." << std::endl;
}