#include "AMateria.hpp"

AMateria::AMateria() : _type("emptyMateria")
{
	// Constructor
}

AMateria::~AMateria()
{
	//Deconstructor
}

AMateria::AMateria(AMateria& const copy) : _type(copy.getType())
{

}

AMateria& AMateria::operator=(AMateria& const rhs)
{
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
	std::cout << "* flails his arms angrily at " << target << " *" << std::endl;
}
