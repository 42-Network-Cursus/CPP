#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat: public AAnimal
{
private:
	Brain* _brain;
public:
	Cat();
	~Cat();
	Cat(const Cat& Cat);
	virtual Cat& operator=(const Cat& Cat);

	void	makeSound() const;
};

#endif