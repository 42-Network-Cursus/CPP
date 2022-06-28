#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
private:
	bool	_announceConstruct = true; // True for construct msgs
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

	void	setHitPoints(int hitPoints);
	void	setEnergyPoints(int energyPoints);
	void	setAttackDamage(int attackDamage);
};

#endif