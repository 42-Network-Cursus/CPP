/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:54:53 by cwastche          #+#    #+#             */
/*   Updated: 2022/06/29 11:55:35 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

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

Zombie*	zombieHorde(int N, std::string name);

#endif