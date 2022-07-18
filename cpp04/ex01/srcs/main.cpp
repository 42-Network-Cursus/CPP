#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include <new>
#include <cstdlib>
#include <unistd.h>

int main()
{
	{
		std::cout << "--- PDF MAIN ---" << std::endl;
		const Animal* j = new Dog();
		std::cout << std::endl;
		const Animal* i = new Cat();
		std::cout << std::endl;

		delete j;//should not create a leak
		std::cout << std::endl;
		delete i;
		std::cout << std::endl;
	}
	{
		std::cout << "--- Animal array ---" << std::endl;
		Animal* tab[10];

		for (int i = 0; i < 10; i++)
		{
			std::cout << i + 1 << "/" << std::endl;
			if (i < 5)
				tab[i] = new Dog();
			else
				tab[i] = new Cat();

			std::cout << "Type: " << tab[i]->getType() << std::endl;
			tab[i]->makeSound();
			srand(time(NULL));
			int idx = rand() % 100;
			tab[i]->haveIdea(idx);
			sleep(1);
			std::cout << std::endl;
		}

		

		for (int i = 9; i >= 0; i--)
		{
			std::cout << i + 1 << "/" << std::endl;
			delete tab[i];
			std::cout << std::endl;
		}
	}
	return 0;
}
