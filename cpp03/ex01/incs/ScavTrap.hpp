/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:37:11 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/08 15:52:15 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class ScavTrap: public ClapTrap
{
private:
	bool	_guardMode;
public:
	ScavTrap(void);
	ScavTrap(const ScavTrap& copy);
	ScavTrap(std::string name);
	~ScavTrap(void);
	ScavTrap&	operator=(const ScavTrap& scavTrap);

	void 	attack(const std::string& target);
	void	guardGate();
};

#endif