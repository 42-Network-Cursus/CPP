#include <new>
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include <iostream>


//Interface : 
//specify a contract that parts of the program have to conform to
//Unlike abstract class which can, methods have no body for interface
//Serves as a guideline, the way the code is supposed to be used/implemented

// CHECK FOR LEAKS
int main()
{
	{
		std::cout << "------- PDF MAIN -------" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << std::endl << "------- UNEQUIPED MATERIA -------" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* jason = new Character("Jason");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		for (int i = 0; i < 100; i++)
		{
			jason->equip(tmp);
			jason->unequip(0);
		}
		delete jason;
		delete src;
	}
	return 0;
}
