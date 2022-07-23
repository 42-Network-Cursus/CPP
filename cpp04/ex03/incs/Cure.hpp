/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:10:03 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/23 11:10:04 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Cure : public AMateria
{
public:
	Cure();
	~Cure(); //Virtual ?
	Cure(Cure const & copy);
	Cure& operator=(Cure const & rhs);

	virtual	AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif