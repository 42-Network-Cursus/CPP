/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:58:57 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/12 13:15:51 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *brainPTR = &brain;
	std::string &brainREF = brain;

	std::cout << "Printing memory addresses of..." << std::endl;
	std::cout << "brain: " << &brain << std::endl;
	std::cout << "brainPTR: " << &brainPTR << std::endl;
	std::cout << "brainREF: " << &brainREF << std::endl << std::endl;

	std::cout << "Printing values of..." << std::endl;
	std::cout << "brain: " << brain << std::endl;
	std::cout << "brainPTR: " << *brainPTR << std::endl;
	std::cout << "brainREF: " << brainREF << std::endl << std::endl;
	return (0);
}