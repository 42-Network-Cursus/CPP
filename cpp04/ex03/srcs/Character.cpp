/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:10:13 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/25 18:42:21 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Default")
{
	std::cout << "* Character default constructor called *" << std::endl;
	for (int i = 0; i < INVSIZE; i++)
		_storage[i] = NULL;
	for (int i = 0; i < GROUNDSIZE; i++)
		_mUnequiped[i] = NULL;
}

Character::Character(std::string const name) :
 _name(name)
{
	std::cout << "* Character name constructor called *" << std::endl;
	for (int i = 0; i < INVSIZE; i++)
		_storage[i] = NULL;
	for (int i = 0; i < GROUNDSIZE; i++)
		_mUnequiped[i] = NULL;
}

Character::~Character()
{
	std::cout << "* Character destructor called *" << std::endl;
	for (int i = 0; i < INVSIZE; i++)
		delete this->_storage[i];
	for (int i = 0; i < GROUNDSIZE; i++)
		delete this->_mUnequiped[i];
}

Character::Character(Character const & rhs) : 
_name(rhs._name)
{
	std::cout << "* Character copy constructor called *" << std::endl;
	for (int i = 0; i < INVSIZE; i++)
		_storage[i] = NULL;
	for (int i = 0; i < GROUNDSIZE; i++)
		_mUnequiped[i] = NULL;
	for (int i = 0; i < INVSIZE; i++)
	{
		if (rhs._storage[i])
			this->equip(rhs._storage[i]->clone());
	}
}

Character& Character::operator=(Character const & rhs)
{
	std::cout << "* Character assignment operator called *" << std::endl;
	this->_name = rhs._name;
	for (int i = 0; i < INVSIZE; i++)
	{
		delete this->_storage[i];
		this->_storage[i] = NULL;
		if (rhs._storage[i])
			this->equip(rhs._storage[i]->clone());
	}
	for (int i = 0; i < GROUNDSIZE; i++)
	{
		delete this->_mUnequiped[i];
		if (rhs._mUnequiped[i])
			this->_mUnequiped[i] = rhs._mUnequiped[i]->clone();
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	int i = 0;
	for ( ; i < INVSIZE; i++)
	{
		if (this->_storage[i] == NULL)
			break ;
	}
	if (i < INVSIZE)
	{
		std::cout << this->_name << " equips a materia of " << m->getType() << " type" << std::endl;
		this->_storage[i] = m;
	}
	else
	{
		std::cout << this->_name << "'s inventory is full." << std::endl;
		delete m;
	}
}

bool Character::addToList(AMateria* storage[], int idx)
{
	for (int i = 0; i < GROUNDSIZE; i++)
	{
		if (this->_mUnequiped[i] == NULL)
		{
			std::cout << this->_name << " unequips a materia of " << storage[idx]->getType() << " type" << std::endl;
			this->_mUnequiped[i] = storage[idx];
			storage[idx] = NULL;
			return true;
		}
	}
	return false;
}

void Character::unequip(int idx)
{
	if (idx < INVSIZE)
	{
		if (this->_storage[idx] != NULL)
		{	
			if (addToList(this->_storage, idx) == false)
				std::cout << "No more space on the ground. Can't unequip any more materias." << std::endl;
			else
				this->_storage[idx] = NULL;
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < INVSIZE)
	{
		if (this->_storage[idx] != NULL)
		{
			std::cout << this->_name << " ";
			this->_storage[idx]->use(target);
		}
	}
}

void	Character::getStorageMemoryAddress(void)
{
	for (int i = 0; i < INVSIZE; i++)
		std::cout << &(this->_storage[i]) << std::endl;
	
	std::cout << "Address of object " << this->_name << " " << this << std::endl;

}
