/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:47:25 by cwastche          #+#    #+#             */
/*   Updated: 2022/06/29 11:47:26 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	std::string	input;
	PhoneBook	directory;

	std::cout << "This is a phonebook. Use it to add and/or search your contacts." << std::endl;
	while (1)
	{
		std::cout << "Enter ADD, SEARCH or EXIT." << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			directory.addContact(directory._list);
		}
		else if (input == "SEARCH")
		{
			directory.searchContact(directory._list);
		}
		else if (input == "EXIT")
		{
			std::cout << "Exit program. Sure hope you saved those contacts elsewhere!" << std::endl;
			return (0);
		}
	}
	return (0);
}
