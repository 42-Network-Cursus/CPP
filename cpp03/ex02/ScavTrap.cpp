#include "ScavTrap.hpp"

/*********************/
/* --- CONSTRUCT --- */
/*********************/

ScavTrap::ScavTrap(void) : ClapTrap("Unnamed scavTrap", 100, 50, 20)
{
	this->_guardMode = false;
	this->_announceConstruct = true;
	if (this->_announceConstruct)
		std::cout << "* ScavTrap default constructor called *" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy.getName(), 100, 50, 20)
{
	if (this->_announceConstruct)
		std::cout << "* ScavTrap copy constructor called *" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	this->_guardMode = false;
	this->_announceConstruct = true;
	if (this->_announceConstruct)
		std::cout << "* ScavTrap name constructor called *" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	if (this->_announceConstruct)
		std::cout << "* ScavTrap deconstructor called for " << getName() << "*" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& scavTrap)
{
	if (this->_announceConstruct)
		std::cout << "* ScavTrap Assignment operator called *" << std::endl;
	ClapTrap::operator=(scavTrap);
	return (*this);
}

/****************************/
/* --- MEMBER FUNCTIONS --- */
/****************************/

void 	ScavTrap::attack(const std::string& target)
{
	std::string name = getName();
	int& hp = getHitPoints();
	int&	energy = getEnergyPoints();
	int&	ad = getAttackDamage();
	if (hp > 0 and energy > 0)
	{
		std::cout << "(ScavTrap) " << name << " attacks " << target << std::endl;
		std::cout << target << " loses " << ad << " hit points" << std::endl;
		ClapTrap::useEnergyPoint(energy);
	}
	else if (hp <= 0)
		std::cout << "(ScavTrap) " << name << " is already dead. Leave it alone!" << std::endl << std::endl;
	else
	{
		std::cout << "(ScavTrap) " << name << " cannot attack" << std::endl;
		std::cout << "Energy points left: " << energy << std::endl << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	if (getHitPoints() <= 0)
		std::cout << "(ScavTrap) " << getName() << " is already dead. Leave it alone!" << std::endl << std::endl;
	else if (getEnergyPoints() <= 0)
	{
		std::cout << "(ScavTrap) " << getName() << " cannot attack" << std::endl;
		std::cout << "Energy points left: " << getEnergyPoints() << std::endl << std::endl;
	}
	else
	{
		if (this->_guardMode)
		{
			this->_guardMode = false;
			std::cout << getName() << ": Guard mode turned OFF" << std::endl;
		}
		else
		{
			this->_guardMode = true;
			std::cout << getName() << ": Guard mode turned ON" << std::endl;
		}
	}
}

/******************/
/* --- GETTERS ---*/
/******************/

std::string	ScavTrap::getName() const
{
	return (ClapTrap::getName());
}

int&	ScavTrap::getHitPoints(void)
{
	return (ClapTrap::getHitPoints());
}

int&	ScavTrap::getEnergyPoints(void)
{
	return (ClapTrap::getEnergyPoints());
}

int&	ScavTrap::getAttackDamage(void)
{
	return(ClapTrap::getAttackDamage());
}