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
		std::cout << "* Default constructor called *" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	this->_name = name;
	if (this->_announceConstruct)
		std::cout << "* Name constructor called *" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	if (this->_announceConstruct)
		std::cout << "* Copy constructor called *" << std::endl;
}

ClapTrap::~ClapTrap()
{
	if (this->_announceConstruct)
		std::cout << "* Deconstructor called for " << this->_name << "*" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
	if (this->_announceConstruct)
		std::cout << "* Assignment operator called *" << std::endl;
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
		std::cout << this->_name << " attacks " << target << std::endl;
		std::cout << target << " loses " << this->_attackDamage << " hit points" << std::endl;
		useEnergyPoint(this->_energyPoints);
	}
	else if (this->_hitPoints <= 0)
		std::cout << this->_name << " is already dead. Leave it alone!" << std::endl << std::endl;
	else
	{
		std::cout << this->_name << " cannot attack" << std::endl;
		std::cout << "Energy points left: " << this->_energyPoints << std::endl << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints = this->_hitPoints - amount;
		std::cout << this->_name << " gets attacked" << std::endl;
		std::cout << this->_name << " loses " << amount << " hit points" << std::endl;
		if (this->_hitPoints <= 0)
			std::cout << this->_name << " died of its injuries" << std::endl;
		else
			std::cout << this->_name << " has " << this->_hitPoints << " hit points remaining" << std::endl;
		std::cout << std::endl;
	}
	else
		std::cout << this->_name << " is already dead. Leave it alone!" << std::endl << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints = this->_hitPoints + amount;
		std::cout << this->_name << " gets repaired" << std::endl;
		std::cout << this->_name << " gains " << amount << " hit points" << std::endl;
		std::cout << this->_name << " has " << this->_hitPoints << " hit points remaining" << std::endl;
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
