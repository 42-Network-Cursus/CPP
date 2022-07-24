/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:09:41 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/24 13:04:21 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat: public WrongAnimal
{
public:
	WrongCat();
	virtual ~WrongCat();
	WrongCat(const WrongCat& WrongCat);
	WrongCat& operator=(const WrongCat& WrongCat);

	void	makeSound() const;
};

#endif