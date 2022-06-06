#include "Zombie.hpp"

void	randomChump(std::string _name)
{
	Zombie tmp;

	tmp.setName(_name);
	tmp.announce();
}