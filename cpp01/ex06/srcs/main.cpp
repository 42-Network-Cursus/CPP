/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:20:23 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/12 13:38:00 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char* av[])
{
	if (ac != 2)
	{
		std::cout << "Use only one parameter" << std::endl;
		return (0);
	}
	
	std::string	input(av[1]);
	Harl Jeff;
	Jeff.complain(input);
}