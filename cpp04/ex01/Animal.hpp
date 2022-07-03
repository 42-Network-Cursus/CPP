#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal& Animal);
	virtual Animal& operator=(const Animal& Animal);

	virtual void makeSound() const;
	std::string	getType() const;
};

#endif