#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
	bool	_guardMode = false;
	bool	_announceConstruct = true; // True for construct msgs
public:
	ScavTrap(void);
	ScavTrap(const ScavTrap& copy);
	ScavTrap(std::string name);
	~ScavTrap(void);
	ScavTrap&	operator=(const ScavTrap& scavTrap);

	void 	attack(const std::string& target);
	void	guardGate();

	std::string	getName() const;
	int&		getHitPoints(void);
	int&		getEnergyPoints(void);
	int&		getAttackDamage(void);
};

#endif