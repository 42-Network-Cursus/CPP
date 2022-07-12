/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:15:42 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/12 11:15:43 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "* Cat default constructor called *" << std::endl;
}

Cat::~Cat()
{
	std::cout << "* Cat default deconstructor called *" << std::endl;
}

Cat::Cat(const Cat& Cat)
{
	*this = Cat;
	std::cout << "* Cat copy constructor called *" << std::endl;
}

Cat& Cat::operator=(const Cat& Cat)
{
	std::cout << "* Cat assignment operator called *" << std::endl;
	this->type = Cat.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat sounds..." << std::endl;
}