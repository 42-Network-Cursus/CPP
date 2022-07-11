/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:59:59 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/08 15:43:09 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA
{
private:
	Weapon&		_weapon;
	std::string	_name;
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

	void	attack();
};

#endif