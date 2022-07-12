/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:15:32 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/12 11:15:33 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class Cat: public Animal
{
public:
	Cat();
	~Cat();
	Cat(const Cat& Cat);
	Cat& operator=(const Cat& Cat);

	void	makeSound() const;
};

#endif