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
//	*this = rhs;
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
