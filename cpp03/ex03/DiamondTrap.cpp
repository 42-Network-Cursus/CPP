#include "DiamondTrap.hpp"

/*********************/
/* --- CONSTRUCT --- */
/*********************/

DiamondTrap::DiamondTrap(void) : ClapTrap("UnnamedTrap", 500, 500, 500)
{
	
	this->_announceConstruct = true; // True for construct msgs
	if (this->_announceConstruct)
		std::cout << "* DiamondTrap default constructor called *" << std::endl;
	std::string name = "UnnamedTrap";
	std::string clapSuffix = "_clap_name";
	setName(name + clapSuffix);
	// this->_name = "UnnamedTrap";
	// setHitPoints( FragTrap::getHitPoints() );
	// setEnergyPoints( ScavTrap::getEnergyPoints() );
	// setAttackDamage( FragTrap::getAttackDamage() );
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	if (this->_announceConstruct)
		std::cout << "* DiamondTrap copy constructor called *" << std::endl;
	*this = copy;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name, 500, 500, 500)
{
	
	this->_announceConstruct = true;
	if (this->_announceConstruct)
		std::cout << "* DiamondTrap name constructor called *" << std::endl;
	std::string clapSuffix = "_clap_name";
	setName(name + clapSuffix);
	// this->_name = name;
	// setHitPoints( FragTrap::getHitPoints() );
	// setEnergyPoints( ScavTrap::getEnergyPoints() );
	// setAttackDamage( FragTrap::getAttackDamage() );
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
	std::cout << "I am " << getName() << " and my clap name is " << getClapName() << std::endl;
}

void	DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}

/******************/
/* --- GETTERS ---*/
/******************/

std::string	DiamondTrap::getName()
{
	return (this->_name);
}

std::string	DiamondTrap::getClapName() const
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

void	DiamondTrap::setHitPoints(int hitPoints)
{
	ClapTrap::setHitPoints(hitPoints);
}

void	DiamondTrap::setEnergyPoints(int energyPoints)
{
	ClapTrap::setEnergyPoints(energyPoints);
}

void	DiamondTrap::setAttackDamage(int attackDamage)
{
	ClapTrap::setAttackDamage(attackDamage);
}
