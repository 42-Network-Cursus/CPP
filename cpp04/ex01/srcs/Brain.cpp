#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "* Brain default constructor called *" << std::endl;
	for (int i = 0; i < NB_OF_IDEAS; i++)
		this->_ideas[i] = "Idea nb " + to_string(i);
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
	
	for (int i = 0; i < NB_OF_IDEAS; i++)
		this->_ideas[i] = brain.getIdea(i);
	return (*this);
}

std::string	Brain::getIdea(int idx)
{
	return(this->_ideas[idx]);
}