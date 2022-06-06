#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

Zombie::~Zombie(void)
{
	std::cout << "Destroying " << _name << std::endl;
}

std::string	Zombie::getName(void)
{
	return (_name);
}

void	Zombie::setName(std::string newName)
{
	_name = newName;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}