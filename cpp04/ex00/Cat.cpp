#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "* Cat default constructor called *" << std::endl;
}

Cat::~Cat()
{
	std::cout << "* Cat default deconstructor called *" << std::endl;
}

Cat::Cat(const Cat& Cat)
{
	*this = Cat;
	std::cout << "* Cat copy constructor called *" << std::endl;
}

Cat& Cat::operator=(const Cat& Cat)
{
	std::cout << "* Cat assignment operator called *" << std::endl;
	this->type = Cat.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Cat sounds..." << std::endl;
}