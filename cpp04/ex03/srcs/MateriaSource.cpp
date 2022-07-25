/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:10:18 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/23 11:10:18 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "* MateriaSource constructor called *" << std::endl;
	for (int i = 0; i < INVSIZE; i++)
		this->_storage[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & rhs)
{
	std::cout << "* MateriaSource copy constructor called *" << std::endl;
	for (int i = 0; i < INVSIZE; i++)
	{
		this->_storage[i] = rhs._storage[i];
	}
}

MateriaSource::~MateriaSource()
{
	std::cout << "* MateriaSource destructor called *" << std::endl;
	for (int i = 0; i < INVSIZE; i++)
	{
		if (this->_storage[i])
			delete this->_storage[i];
	}
}

MateriaSource& MateriaSource::operator=(MateriaSource & rhs)
{
	for (int i = 0; i < INVSIZE; i++)
	{
		this->_storage[i] = rhs._storage[i];
	}
	std::cout << "* MateriaSource assignment operator called *" << std::endl;
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;
	for ( ; i < INVSIZE; i++)
	{
		if (this->_storage[i] == NULL)
			break ;
	}
	if (i < 4)
		this->_storage[i] = m;
	else
	{
		std::cout << "MateriaSource inventory full" << std::endl;
		delete m;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria* ret;
	for (int i = 0; i < INVSIZE; i++)
	{
		if (this->_storage[i]->getType() == type)
		{
			if (type == "ice")
				ret = this->_storage[i]->clone();
			else
				ret = this->_storage[i]->clone();
			return (ret);
		}
	}
	return (0);
}
