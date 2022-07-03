#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "* Brain default constructor called *" << std::endl;
}

Brain::~Brain()
{
	std::cout << "* Brain deconstructor called *" << std::endl;
}

Brain::Brain(const Brain& brain)
{
	std::cout << "* Brain copy constructor called *" << std::endl;
	*this = brain;
}

Brain& Brain::operator=(const Brain& brain)
{
	std::cout << "* Brain = operator called *" << std::endl;
	*this = brain;
	return (*this);
}
