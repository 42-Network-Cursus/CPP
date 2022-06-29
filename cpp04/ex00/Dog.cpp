#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "* Dog default constructor called *" << std::endl;
}

Dog::~Dog()
{
	std::cout << "* Dog default deconstructor called *" << std::endl;
}

Dog::Dog(const Dog& dog)
{
	*this = dog;
	std::cout << "* Dog copy constructor called *" << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "* Dog assignment operator called *" << std::endl;
	this->type = dog.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Dog sounds..." << std::endl;
}