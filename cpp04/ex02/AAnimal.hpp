#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>

class AAnimal
{
protected:
	std::string	type;
public:
	AAnimal();
	virtual ~AAnimal();
	AAnimal(const AAnimal& AAnimal);
	virtual AAnimal& operator=(const AAnimal& AAnimal);

	virtual void makeSound() const = 0;
	std::string	getType() const;
};

#endif