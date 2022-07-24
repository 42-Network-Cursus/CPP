/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:10:11 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/24 13:26:48 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("empty")
{
	// Constructor
}

AMateria::~AMateria()
{
	//Deconstructor
}

AMateria::AMateria(AMateria const & copy) : _type(copy.getType())
{

}

AMateria& AMateria::operator=(AMateria const & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

AMateria::AMateria(std::string const & type) : _type(type)
{

}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "*	does nothing to " << target.getName() << " *" << std::endl;
}
