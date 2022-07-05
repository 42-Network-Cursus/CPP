#ifndef Character_HPP
# define Character_HPP

# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

# define INVSIZE 4

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria* _storage[INVSIZE];
public:
	Character();
	Character(std::string const name);
	virtual ~Character();
	Character(Character const & copy);
	Character& operator=(Character const & character);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif