#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
private:
	bool	_announceConstruct;
public:
	FragTrap(void);
	FragTrap(const FragTrap& copy);
	FragTrap(std::string name);
	~FragTrap(void);
	FragTrap&	operator=(const FragTrap& FragTrap);

	void highFivesGuys(void);

	std::string	getName() const;
	int&		getHitPoints(void);
	int&		getEnergyPoints(void);
	int&		getAttackDamage(void);
};

#endif