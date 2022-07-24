/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:09:19 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/24 12:59:51 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "* Dog default constructor called *" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::~Dog()
{
	delete this->_brain;
	printBrainAddress();
	std::cout << "* Dog default deconstructor called *" << std::endl;
}

Dog::Dog(Dog const & rhs) : Animal()
{
	this->_brain = new Brain();
	*(this->_brain) = *(rhs._brain);
	std::cout << "* Dog copy constructor called *" << std::endl;
}

Dog& Dog::operator=(Dog const & rhs)
{
	std::cout << "* Dog assignment operator called *" << std::endl;
	this->type = rhs.type;
	*(this->_brain) = *(rhs._brain);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog sounds..." << std::endl;
}

void	Dog::getIdea(int idx)
{
	std::cout << this->_brain->getIdea(idx) << std::endl;
}

void	Dog::setIdea(std::string idea, int idx)
{
	this->_brain->setIdea(idea, idx);
}

void	Dog::printBrainAddress()
{
	std::cout << &this->_brain << std::endl;
}