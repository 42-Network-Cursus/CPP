#ifndef ICE_HPP
# define ICE_HPP

class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	Ice(Ice& const copy);
	Ice& operator=(Ice& const ice);

	virtual Ice* clone() const;
	virtual void use(ICharacter& target);
};

#endif