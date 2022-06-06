#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <new>

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

Zombie*	zombieHorde(int N, std::string _name);

#endif