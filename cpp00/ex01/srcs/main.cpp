/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:47:25 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/08 15:37:58 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <csignal>

void	handleSigint(int signum)
{

	std::cout << std::endl << "Error " << signum << ": Use EXIT to quit" << std::endl;
	// (void)signum;
}

int	main()
{
	std::string	input;
	PhoneBook	directory;

	std::cout << "This is a phonebook. Use it to add and/or search your contacts." << std::endl;
	signal(SIGINT, handleSigint); // Handle ctrl + C
	while (1)
	{
		std::cout << "Enter ADD, SEARCH or EXIT." << std::endl;
		if(!std::getline(std::cin, input))
		{
    		std::cin.clear();
			std::cout << std::endl;
			// continue ;
		}
		if (input == "ADD")
			directory.addContact();
		else if (input == "SEARCH")
			directory.searchContact();
		else if (input == "EXIT")
		{
			std::cout << "Exit program. Sure hope you saved those contacts elsewhere!" << std::endl;
			return (0);
		}
		// std::cin.clear();
		// if (std::cin.eof())
		// 	std::cin.ignore(1, '\n');
	}
	return (0);
}
