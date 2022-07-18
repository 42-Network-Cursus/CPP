#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>

//Abstact class : 
//* must have at least one pure virtual function
//* cannot be instantiated as an object
//* provides an appropriate base class from which other classes can inherit
//* Inheriting classes MUST implement each virtual function of the abstract class

class AAnimal
{
protected:
	std::string	type;
public:
	AAnimal();
	virtual ~AAnimal();
	AAnimal(const AAnimal& AAnimal);
	virtual AAnimal& operator=(const AAnimal& AAnimal);

	virtual void makeSound() const = 0; //pure virtual function
	std::string	getType() const;
};

#endif