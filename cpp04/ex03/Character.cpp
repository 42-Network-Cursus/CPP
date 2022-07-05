#include "Character.hpp"
#include <string>

Character::Character() : _name("Default")
{
	for (int i = 0; i < INVSIZE; i++)
		_storage[i] = nullptr;
	//Constructor
}

Character::Character(std::string const name) :
 _name(name)
{
	for (int i = 0; i < INVSIZE; i++)
		_storage[i] = nullptr;
	//Name Constructor
}

Character::~Character()
{
	//delete shit
	//Deconstructor
}

Character::Character(Character const & copy) : 
_name(copy._name)
{
	for (int i = 0; i < INVSIZE; i++)
	{
		this->_storage[i] = copy._storage[i];
	}
	//Copy constructor
	//delete old Materias
}

Character& Character::operator=(Character const & rhs)
{
	this->_name = rhs._name;
	for (int i = 0; i < INVSIZE; i++)
	{
		this->_storage[i] = rhs._storage[i];
	}
	//delete old materias
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < INVSIZE; i++)
	{
		if (this->_storage[i] == nullptr)
		{
			this->_storage[i] = m;
			break ;
		}
	}
}
void Character::unequip(int idx)
{
	if (idx < INVSIZE)
	{
		if (this->_storage[idx] != nullptr)
		{	
			//Store Materia address
			this->_storage[idx] = nullptr;
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < INVSIZE)
	{
		if (this->_storage[idx] != nullptr)
			this->_storage[idx]->use(target);
	}
}
