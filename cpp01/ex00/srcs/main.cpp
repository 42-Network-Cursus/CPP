/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:50:53 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/12 13:13:13 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <new>

int	main()
{
	Zombie zombie1;

	zombie1.setName("Fred");
	zombie1.announce();

	Zombie* newZ;
	newZ = newZombie("newZombie");
	newZ->announce();

	randomChump("randomChump");

	delete newZ;
	
	return (0);
}