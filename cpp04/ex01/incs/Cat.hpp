/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:09:05 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/24 12:57:41 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat: public Animal
{
private:
	Brain* _brain;
public:
	Cat();
	virtual ~Cat();
	Cat(const Cat& Cat);
	virtual Cat& operator=(const Cat& Cat);

	virtual void	makeSound() const;
	virtual void	getIdea(int idx);

	virtual void	printBrainAddress();
	void	setIdea(std::string idea, int idx);

};

#endif