#include "FragTrap.hpp"

/*********************/
/* --- CONSTRUCT --- */
/*********************/

FragTrap::FragTrap(void)
{
	setName("Unnamed FragTrap");
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	this->_announceConstruct = true;
	if (this->_announceConstruct)
		std::cout << "* FragTrap default constructor called *" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy.getName(), 100, 100, 30)
{
	this->_announceConstruct = true;
	if (this->_announceConstruct)
		std::cout << "* FragTrap copy constructor called *" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	setName(name);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	if (this->_announceConstruct)
		std::cout << "* FragTrap name constructor called *" << std::endl;
}

FragTrap::~FragTrap(void)
{
	if (this->_announceConstruct)
		std::cout << "* FragTrap deconstructor called for " << getName() << "*" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& FragTrap)
{
	if (this->_announceConstruct)
		std::cout << "* FragTrap Assignment operator called *" << std::endl;
	ClapTrap::operator=(FragTrap);
	return (*this);
}

/****************************/
/* --- MEMBER FUNCTIONS --- */
/****************************/

void FragTrap::highFivesGuys(void)
{
	std::cout << getName() << " would like to high five you. In the face. If that's okay with you of course :)." << std::endl;
}

/******************/
/* --- GETTERS ---*/
/******************/

std::string	FragTrap::getName() const
{
	return (ClapTrap::getName());
}

int&	FragTrap::getHitPoints(void)
{
	return (ClapTrap::getHitPoints());
}

int&	FragTrap::getEnergyPoints(void)
{
	return (ClapTrap::getEnergyPoints());
}

int&	FragTrap::getAttackDamage(void)
{
	return(ClapTrap::getAttackDamage());
}

/******************/
/* --- SETTERS ---*/
/******************/

void	FragTrap::setHitPoints(int hitPoints)
{
	ClapTrap::setHitPoints(hitPoints);
}

void	FragTrap::setEnergyPoints(int energyPoints)
{
	ClapTrap::setEnergyPoints(energyPoints);
}

void	FragTrap::setAttackDamage(int attackDamage)
{
	ClapTrap::setAttackDamage(attackDamage);
}