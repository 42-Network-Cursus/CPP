#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
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