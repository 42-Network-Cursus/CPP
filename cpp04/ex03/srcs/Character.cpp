#include "Character.hpp"

Character::Character() : _name("Default")
{
	for (int i = 0; i < INVSIZE; i++)
		_storage[i] = NULL;
	//Constructor
}

Character::Character(std::string const name) :
 _name(name)
{
	for (int i = 0; i < INVSIZE; i++)
		_storage[i] = NULL;
	for (int i = 0; i < GROUNDSIZE; i++)
		_mUnequiped[i] = NULL;
	//Name Constructor
}

Character::~Character()
{
	for (int i = 0; i < INVSIZE; i++)
		delete this->_storage[i];
	for (int i = 0; i < GROUNDSIZE; i++)
		delete this->_mUnequiped[i];
	//Deconstructor
}

Character::Character(Character const & copy) : 
_name(copy._name)
{
	for (int i = 0; i < INVSIZE; i++)
	{
		delete this->_storage[i];
		this->_storage[i] = copy._storage[i];
	}
	//Copy constructor
}

Character& Character::operator=(Character const & rhs)
{
	this->_name = rhs._name;
	for (int i = 0; i < INVSIZE; i++)
	{
		delete this->_storage[i];
		this->_storage[i] = rhs._storage[i];
	}
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
		if (this->_storage[i] == NULL)
		{
			this->_storage[i] = m;
			break ;
		}
	}
}

bool Character::addToList(AMateria* storage[], int idx)
{
	for (int i = 0; i < GROUNDSIZE; i++)
	{
		if (this->_mUnequiped[i] == NULL)
		{
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
				std::cout << "No more space on the ground. Can't throw any more materias." << std::endl;
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
			this->_storage[idx]->use(target);
	}
}
