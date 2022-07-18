/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:55:11 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/08 15:54:16 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Normal heritage: 
// A ; B : A ; C : B
// C inherits from B who inherits from A
//Diamond problem:
// A 
// B : A
// C : A
// D : B, C
// B and C both inherit from A
// D inherits from both B and C
// D has a diamond problem : Which A is correct ?
// A - B \
//         D
// A - C /
// Solution : inheritance of A is virtual
//   / B \
// A       D
//   \ C /
//virtual = ensuring that the memory layout does not duplicate the base class members.

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <string>
# include <iostream>

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string _name;
public:
	DiamondTrap(void);
	DiamondTrap(const DiamondTrap& copy);
	DiamondTrap(std::string name);
	~DiamondTrap(void);
	DiamondTrap&	operator=(const DiamondTrap& DiamondTrap);

	void	whoAmI();
	void	attack(std::string target);
};

#endif