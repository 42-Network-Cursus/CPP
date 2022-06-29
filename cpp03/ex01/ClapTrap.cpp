#include "ClapTrap.hpp"

/*********************/
/* --- CONSTRUCT --- */
/*********************/

ClapTrap::ClapTrap()
{
	this->_announceConstruct = true; // True for construct msgs

	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	this->_name = "Unnamed trap";
	if (this->_announceConstruct)
		std::cout << "* ClapTrap default constructor called *" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	this->_name = name;
	if (this->_announceConstruct)
		std::cout << "* ClapTrap name constructor called *" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	if (this->_announceConstruct)
		std::cout << "* ClapTrap copy constructor called *" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage) :
_name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage)
{
	if (this->_announceConstruct)
		std::cout << "* ClapTrap constructor called *" << std::endl;
}

ClapTrap::~ClapTrap()
{
	if (this->_announceConstruct)
		std::cout << "* ClapTrap deconstructor called for " << this->_name << "*" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
	if (this->_announceConstruct)
		std::cout << "* ClapTrap Assignment operator called *" << std::endl;
	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attackDamage = clapTrap._attackDamage;
	return (*this);
}

/****************************/
/* --- MEMBER FUNCTIONS --- */
/****************************/

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 and this->_hitPoints > 0)
	{
		std::cout << "(ClapTrap)" << this->_name << " attacks " << target << std::endl;
		std::cout << target << " loses " << this->_attackDamage << " hit points" << std::endl;
		useEnergyPoint(this->_energyPoints);
	}
	else if (this->_hitPoints <= 0)
		std::cout << "(ClapTrap)" << this->_name << " is already dead. Leave it alone!" << std::endl << std::endl;
	else
	{
		std::cout << "(ClapTrap)" << this->_name << " cannot attack" << std::endl;
		std::cout << "Energy points left: " << this->_energyPoints << std::endl << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints = this->_hitPoints - amount;
		std::cout << "(ClapTrap)" << this->_name << " gets attacked" << std::endl;
		std::cout << "(ClapTrap)" << this->_name << " loses " << amount << " hit points" << std::endl;
		if (this->_hitPoints <= 0)
			std::cout << "(ClapTrap)" << this->_name << " died of its injuries" << std::endl;
		else
			std::cout << "(ClapTrap)" << this->_name << " has " << this->_hitPoints << " hit points remaining" << std::endl;
		std::cout << std::endl;
	}
	else
		std::cout << "(ClapTrap)" << this->_name << " is already dead. Leave it alone!" << std::endl << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints = this->_hitPoints + amount;
		std::cout << "(ClapTrap)" << this->_name << " gets repaired" << std::endl;
		std::cout << "(ClapTrap)" << this->_name << " gains " << amount << " hit points" << std::endl;
		std::cout << "(ClapTrap)" << this->_name << " has " << this->_hitPoints << " hit points remaining" << std::endl;
		std::cout << std::endl;
	}
	else
		std::cout << this->_name << " is already dead. Leave it alone!" << std::endl << std::endl;
}

void	ClapTrap::useEnergyPoint(int& energyPoints)
{
	energyPoints = energyPoints - 1;
	std::cout << "Energy points left: " << energyPoints << std::endl << std::endl;
}

/******************/
/* --- GETTERS ---*/
/******************/

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

int&	ClapTrap::getHitPoints()
{
	return (this->_hitPoints);
}

int&	ClapTrap::getEnergyPoints()
{
	return (this->_energyPoints);
}

int&	ClapTrap::getAttackDamage()
{
	return (this->_attackDamage);
}

/******************/
/* --- SETTERS ---*/
/******************/

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(int hitPoints)
{
	this->_hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints(int energyPoints)
{
	this->_energyPoints = energyPoints;
}

void	ClapTrap::setAttackDamage(int attackDamage)
{
	this->_attackDamage = attackDamage;
}
