#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
private:
	Weapon*		_weapon;
	std::string	_name;
public:
	HumanB(std::string name);
	~HumanB(void);

	void	setName(std::string name);
	void	setWeapon(Weapon& weapon);

	void	attack();
};

#endif