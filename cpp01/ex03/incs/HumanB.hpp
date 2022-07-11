/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:00:36 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/08 15:42:56 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
private:
	Weapon*		_weapon;
	std::string	_name;
public:
	HumanB(std::string name);
	~HumanB(void);

	void	setName(std::string name);
	void	setWeapon(Weapon& weapon);

	void	attack();
};

#endif