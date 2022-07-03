#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal& WrongAnimal);
	WrongAnimal& operator=(const WrongAnimal& WrongAnimal);

	void	makeSound() const;
	std::string	getType() const;
};

#endif