/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:09:36 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/24 13:03:56 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat: public AAnimal
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