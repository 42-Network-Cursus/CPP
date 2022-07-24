/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:10:02 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/24 13:48:30 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_HPP
# define Character_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

# define INVSIZE 4
# define GROUNDSIZE 10

class Character : public ICharacter
{
private:
	std::string	_name;
	AMateria*	_storage[INVSIZE];
	AMateria*	_mUnequiped[GROUNDSIZE];
public:
	Character();
	Character(std::string const name);
	virtual ~Character();
	Character(Character const & copy);
	virtual Character& operator=(Character const & character);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
	
	virtual void	getStorageMemoryAddress(void);

	bool addToList(AMateria* storage[], int idx);
};

#endif