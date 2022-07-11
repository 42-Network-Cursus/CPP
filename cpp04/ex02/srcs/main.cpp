#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include <new>

int main()
{
	AAnimal* a = new Dog();
	AAnimal* b = new Cat();

	a->makeSound();
	b->makeSound();

	delete a;
	delete b;
	
	// Cannot initiate abstract class. Does not compile with line below.
	// AAnimal* c = new AAnimal(); 
	return 0;
}
