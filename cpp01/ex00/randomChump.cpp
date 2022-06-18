#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie tmp;

	tmp.setName(name);
	tmp.announce();
}