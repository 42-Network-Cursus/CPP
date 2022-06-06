#include "Zombie.hpp"

Zombie*	newZombie(std::string _name)
{
	Zombie* ret;

	ret = new Zombie;
	ret->setName(_name);
	return (ret);
}