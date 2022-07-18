#include "Cat.hpp"

Cat::Cat() : Animal()
{	
	std::cout << "* Cat default constructor called *" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "* Cat default deconstructor called *" << std::endl;
}

Cat::Cat(Cat const & rhs) : Animal()
{
	*this = rhs;
	std::cout << "* Cat copy constructor called *" << std::endl;
}

Cat& Cat::operator=(const Cat& Cat)
{
	std::cout << "* Cat assignment operator called *" << std::endl;
	this->type = Cat.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat sounds..." << std::endl;
}

void	Cat::haveIdea(int idx)
{
	std::cout << this->_brain->getIdea(idx) << std::endl;
}