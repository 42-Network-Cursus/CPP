/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:10:16 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/23 11:32:40 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : 
AMateria("ice")
{
	std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice deconstructor called" << std::endl;
}

Ice::Ice(Ice const & copy) :
AMateria(copy.getType())
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice& Ice::operator=(Ice const & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}


AMateria* Ice::clone() const
{
	AMateria* ret = new Ice();
	return (ret);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
