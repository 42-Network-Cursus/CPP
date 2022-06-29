/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:20:23 by cwastche          #+#    #+#             */
/*   Updated: 2022/06/29 13:22:27 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main()
{
	Harl Jeff;

	std::cout << std::endl << "---Random words---" << std::endl;
	Jeff.complain("Random");
	std::cout << std::endl << "---Debug level---" << std::endl;
	Jeff.complain("debug");
	std::cout << std::endl << "---Info level---" << std::endl;
	Jeff.complain("info");
	std::cout << std::endl << "---Warning level---" << std::endl;
	Jeff.complain("warning");
	std::cout << std::endl << "---Error level---" << std::endl;
	Jeff.complain("error");
}