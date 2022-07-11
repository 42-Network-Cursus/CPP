#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog: public Animal
{
private:
	Brain* _brain;
public:
	Dog();
	~Dog();
	Dog(const Dog& dog);
	virtual Dog& operator=(const Dog& dog);

	void	makeSound() const;
};

#endif