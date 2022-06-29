/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:51:17 by cwastche          #+#    #+#             */
/*   Updated: 2022/06/29 11:53:05 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <new>
#include <string>

Zombie*	newZombie(std::string name)
{
	Zombie* ret;

	ret = new Zombie;
	ret->setName(name);
	return (ret);
}