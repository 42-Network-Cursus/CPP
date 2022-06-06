#include "Zombie.hpp"

int	main()
{
	Zombie zombie1;

	zombie1.setName("Fred");
	zombie1.announce();

	Zombie* newZ;
	newZ = newZombie("newZombie");
	newZ->announce();

	randomChump("randomChump");
	delete newZ;
	return (0);
}