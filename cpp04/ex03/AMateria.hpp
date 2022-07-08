#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

# define INVSIZE 4

class ICharacter;

class AMateria
{
protected:
	std::string _type;
public:
	AMateria();
	virtual ~AMateria();
	AMateria(AMateria const & copy);
	AMateria& operator=(AMateria const & rhs);
	AMateria(std::string const & type);
	
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif