/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:09:50 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/24 13:05:40 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
