#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
private:
	std::string	_name;
	int			_hitPoints = 10;
	int			_energyPoints = 10;
	int			_attackDamage = 0;
	bool		_announceConstruct = true; // True for construct msgs  
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& copy);
	ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& clapTrap);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void	useEnergyPoint(int& energyPoints);

	//Getters
	std::string	getName() const;
	int&	getHitPoints();
	int&	getEnergyPoints();
	int&	getAttackDamage();

	//Setters
	void	setName(std::string name);
	void	setHitPoints(int hitPoints);
	void	setEnergyPoints(int energyPoints);
	void	setAttackDamage(int attackDamage);
};

#endif