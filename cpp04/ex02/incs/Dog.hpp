/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:09:38 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/24 13:04:11 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog: public AAnimal
{
private:
	Brain* _brain;
public:
	Dog();
	virtual ~Dog();
	Dog(const Dog& dog);
	virtual Dog& operator=(const Dog& dog);

	virtual void	makeSound() const;
	virtual void	getIdea(int idx);

	virtual void	printBrainAddress();
	void	setIdea(std::string idea, int idx);
};

#endif