#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	bool		_announceConstruct;
	std::string _name;
public:
	DiamondTrap(void);
	DiamondTrap(const DiamondTrap& copy);
	DiamondTrap(std::string name);
	~DiamondTrap(void);
	DiamondTrap&	operator=(const DiamondTrap& DiamondTrap);

	void	whoAmI();
	void	attack(std::string target);

	std::string	getName();
	std::string	getClapName() const;
	int&		getHitPoints(void);
	int&		getEnergyPoints(void);
	int&		getAttackDamage(void);

	void	setName(std::string name);
	void	setHitPoints(int hitPoints);
	void	setEnergyPoints(int energyPoints);
	void	setAttackDamage(int attackDamage);
};

#endif