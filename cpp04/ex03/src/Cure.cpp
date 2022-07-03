#include "Cure.hpp"
#include <iostream>

Cure::Cure() : _type("cure")
{
	std::cout << "Cure constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure deconstructor called" << std::endl;
}

Cure::Cure(Cure& const copy) _type(copy.getType())
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure& Cure::operator=(Cure& const cure)
{
	*this = cure;
	return (*this);
}


Cure* Cure::clone() const
{
	Cure* ret = new Cure();
	return (ret);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target << "'s wounds *" << std::endl;
}
