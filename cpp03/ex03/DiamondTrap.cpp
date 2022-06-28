#include "DiamondTrap.hpp"

/*********************/
/* --- CONSTRUCT --- */
/*********************/

DiamondTrap::DiamondTrap(void)
{
	if (this->_announceConstruct)
		std::cout << "* DiamondTrap default constructor called *" << std::endl;
	std::string name = "UnnamedTrap";
	std::string clapSuffix = "_clap_name";
	setName(name + clapSuffix);
	this->_name = "UnnamedTrap";
	this->_hitPoints = FragTrap::getHitPoints();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	this->_attackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	if (this->_announceConstruct)
		std::cout << "* DiamondTrap copy constructor called *" << std::endl;
	*this = copy
}

DiamondTrap::DiamondTrap(std::string name)
{
	if (this->_announceConstruct)
		std::cout << "* DiamondTrap name constructor called *" << std::endl;
	std::string clapSuffix = "_clap_name";
	setName(name + clapSuffix);
	this->_name = name;
	this->_hitPoints = FragTrap::getHitPoints();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	this->_attackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::~DiamondTrap(void)
{
	if (this->_announceConstruct)
		std::cout << "* DiamondTrap deconstructor called *" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& DiamondTrap)
{
	if (this->_announceConstruct)
		std::cout << "* DiamondTrap Assignment operator called *" << std::endl;
	ClapTrap::operator=(DiamondTrap);
	return (*this);
}

/****************************/
/* --- MEMBER FUNCTIONS --- */
/****************************/

void	DiamondTrap::whoAmI()
{
	std::cout << "I am " << this->_name << " and my clap name is " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}

/******************/
/* --- GETTERS ---*/
/******************/

std::string	DiamondTrap::getName() const
{
	return (ClapTrap::getName());
}

int&	DiamondTrap::getHitPoints(void)
{
	return (ClapTrap::getHitPoints());
}

int&	DiamondTrap::getEnergyPoints(void)
{
	return (ClapTrap::getEnergyPoints());
}

int&	DiamondTrap::getAttackDamage(void)
{
	return(ClapTrap::getAttackDamage());
}

/******************/
/* --- SETTERS ---*/
/******************/

void	DiamondTrap::setName(std::string name)
{
	ClapTrap::setName(name);
}

void	setHitPoints(int hitPoints)
{
	setHitPoints() frag
}

void	setEnergyPoints(int energyPoints)
{

}

void	setAttackDamage(int attackDamage)
{
	frag
}
