#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	//Constructor
	for (int i = 0; i < INVSIZE; i++)
		this->_storage[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & rhs)
{
	for (int i = 0; i < INVSIZE; i++)
	{
		this->_storage[i] = rhs._storage[i];
	}
	//Copy constructor
}

MateriaSource::~MateriaSource()
{
	//Deconstructor
}

MateriaSource& MateriaSource::operator=(MateriaSource & rhs)
{
	for (int i = 0; i < INVSIZE; i++)
	{
		this->_storage[i] = rhs._storage[i];
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
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
