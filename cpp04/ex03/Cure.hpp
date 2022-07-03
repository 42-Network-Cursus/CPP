#ifndef CURE_HPP
# define CURE_HPP

class Cure : public AMateria
{
public:
	Cure();
	~Cure();
	Cure(Cure& const copy);
	Cure& operator=(Cure& const cure);

	virtual Cure* clone() const;
	virtual void use(ICharacter& target);
};

#endif