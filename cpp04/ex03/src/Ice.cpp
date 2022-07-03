#include "Ice.hpp"
#include <iostream>

Ice::Ice() : _type("ice")
{
	std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice deconstructor called" << std::endl;
}

Ice::Ice(Ice& const copy) _type(copy.getType())
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice& Ice::operator=(Ice& const ice)
{
	*this = ice;
	return (*this);
}


Ice* Ice::clone() const
{
	Ice* ret = new Ice();
	return (ret);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target << " *" << std::endl;
}
