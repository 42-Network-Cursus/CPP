#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string	_name;

public:
	Zombie(void);
	~Zombie(void);

	void		announce(void);
	void		setName(std::string newName);
	std::string	getName(void);
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif