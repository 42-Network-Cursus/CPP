#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal()
{
	this->type = "AAnimal";
	std::cout << "* AAnimal default constructor called *" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "* AAnimal default deconstructor called *" << std::endl;
}

AAnimal::AAnimal(const AAnimal& AAnimal)
{
	*this = AAnimal;
	std::cout << "* AAnimal copy constructor called *" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& AAnimal)
{
	std::cout << "* AAnimal assignment operator called *" << std::endl;
	this->type = AAnimal.type;
	return (*this);
}

void	AAnimal::makeSound() const
{
	std::cout << "AAnimal sounds..." << std::endl;
}

std::string	AAnimal::getType() const
{
	return (this->type);
}