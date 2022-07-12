/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:15:45 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/12 11:15:46 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "* Dog default constructor called *" << std::endl;
}

Dog::~Dog()
{
	std::cout << "* Dog default deconstructor called *" << std::endl;
}

Dog::Dog(const Dog& dog)
{
	*this = dog;
	std::cout << "* Dog copy constructor called *" << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "* Dog assignment operator called *" << std::endl;
	this->type = dog.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog sounds..." << std::endl;
}