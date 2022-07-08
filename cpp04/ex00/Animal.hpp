#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal& Animal);
	Animal& operator=(const Animal& Animal);

	void	virtual makeSound() const;
	std::string	getType() const;
};

#endif