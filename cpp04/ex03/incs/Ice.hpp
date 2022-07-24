/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:10:05 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/24 13:06:55 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Ice : public AMateria
{
public:
	Ice();
	virtual ~Ice();
	Ice(Ice const & copy);
	Ice& operator=(Ice const & rhs);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif