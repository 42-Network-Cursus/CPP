#ifndef Character_HPP
# define Character_HPP

# include <string>

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria* _storage[4];
	static	int	_nbOfMaterias;
public:
	Character();
	Character(std::string const name);
	virtual ~Character();
	Character(Character& const copy);
	Character& operator=(Character& const character);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif