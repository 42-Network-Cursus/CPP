/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:09:17 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/23 15:54:18 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{	
	std::cout << "* Cat default constructor called *" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat()
{
	delete this->_brain;
	printBrainAddress();
	std::cout << "* Cat default deconstructor called *" << std::endl;
}

Cat::Cat(Cat const & rhs) : Animal()
{
	this->_brain = new Brain();
	*(this->_brain) = *(rhs._brain);
	std::cout << "* Cat copy constructor called *" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
	std::cout << "* Cat assignment operator called *" << std::endl;
	this->_brain = new Brain();
	this->type = rhs.type;
	*(this->_brain) = *(rhs._brain);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat sounds..." << std::endl;
}

void	Cat::getIdea(int idx)
{
	std::cout << this->_brain->getIdea(idx) << std::endl;
}

void	Cat::setIdea(std::string idea, int idx)
{
	this->_brain->setIdea(idea, idx);
}

void	Cat::printBrainAddress()
{
	std::cout << &this->_brain << std::endl;
}