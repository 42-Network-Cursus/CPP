#ifdef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP


//Change heritance from ClapTrap for Frag and Scav as virtual
//ex: class FragTrap: virtual public ClapTrap
class DiamondTrap: public FragTrap, public ScavTrap
{

};

#endif