/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:15:34 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/24 12:55:40 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class Dog: public Animal
{
public:
	Dog();
	virtual ~Dog();
	Dog(const Dog& dog);
	Dog& operator=(const Dog& dog);

	void virtual	makeSound() const;
};

#endif