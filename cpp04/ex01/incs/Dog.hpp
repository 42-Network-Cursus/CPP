/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:09:07 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/23 15:51:51 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	Dog(Dog const & dog);
	virtual Dog& operator=(Dog const & rhs);

	void	makeSound() const;
	void	getIdea(int idx);

	void	printBrainAddress();
	void	setIdea(std::string idea, int idx);
};

#endif