/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:05:40 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/12 11:05:42 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie(void);
	~Zombie(void);

	void		announce(void);
	void		setName(std::string newName);
	std::string	getName(void);
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif