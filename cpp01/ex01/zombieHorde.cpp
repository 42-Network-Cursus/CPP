#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string _name)
{
	Zombie* horde;

	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setName(_name);
	return (horde);
}