/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:18:37 by cwastche          #+#    #+#             */
/*   Updated: 2022/06/29 13:18:49 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main()
{
	Harl Jeff;

	std::cout << "---Random words---" << std::endl;
	Jeff.complain("Random");
	std::cout << "---Debug level---" << std::endl;
	Jeff.complain("debug");
	std::cout << "---Info level---" << std::endl;
	Jeff.complain("info");
	std::cout << "---Warning level---" << std::endl;
	Jeff.complain("warning");
	std::cout << "---Error level---" << std::endl;
	Jeff.complain("error");
}