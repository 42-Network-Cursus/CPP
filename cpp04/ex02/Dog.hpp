#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
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