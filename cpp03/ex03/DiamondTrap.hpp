/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:55:11 by cwastche          #+#    #+#             */
/*   Updated: 2022/06/29 15:55:17 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <string>

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