/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:08:51 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/24 12:57:23 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal& Animal);
	virtual Animal& operator=(const Animal& Animal);

	virtual void makeSound() const;
	std::string	getType() const;
	
	virtual void getIdea(int idx);
	virtual void printBrainAddress();
};

#endif