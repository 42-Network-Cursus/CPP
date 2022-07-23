/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:10:14 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/23 11:32:17 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : 
AMateria("cure")
{
	std::cout << "Cure constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure deconstructor called" << std::endl;
}

Cure::Cure(Cure const & copy) :
AMateria(copy.getType())
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure& Cure::operator=(Cure const & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}


AMateria* Cure::clone() const
{
	AMateria* ret = new Cure();
	return (ret);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
