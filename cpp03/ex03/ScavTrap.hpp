#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
private:
	bool	_guardMode;
	bool	_announceConstruct;
public:
	ScavTrap(void);
	ScavTrap(const ScavTrap& copy);
	ScavTrap(std::string name);
	~ScavTrap(void);
	ScavTrap&	operator=(const ScavTrap& scavTrap);

	void 	attack(const std::string& target);
	void	guardGate();

	std::string	getName(void) const;
	int&		getHitPoints(void);
	int&		getEnergyPoints(void);
	int&		getAttackDamage(void);

	void	setName(std::string name);
	void	setHitPoints(int hitPoints);
	void	setEnergyPoints(int energyPoints);
	void	setAttackDamage(int attackDamage);
};

#endif