/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:47:02 by cwastche          #+#    #+#             */
/*   Updated: 2022/06/29 11:47:09 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

/* addContact */

static void	fillContactInfo(std::string msg, std::string *str)
{
	while (1)
	{
		std::cout << msg << std::endl;
		getline(std::cin, *str);
		if (!str->empty())
			break ;
	}
}

void	PhoneBook::addContact(Contact *list)
{
	static int i = 0;

	if (i > 7)
		i = 0;
	fillContactInfo("First name ?", &list[i].firstName);
	fillContactInfo("Last name ?", &list[i].lastName);
	fillContactInfo("Nickname ?", &list[i].nickname);
	fillContactInfo("Phone number ?", &list[i].phoneNumber);
	fillContactInfo("Darkest secret ?", &list[i].darkestSecret);
	i++;
}

/* searchContact */

static void	printContactDetails(Contact *list, int index)
{
	int i = index;

	std:: cout << "First name: " << list[i].firstName << std::endl;
	std:: cout << "Last name: " << list[i].lastName << std::endl;
	std:: cout << "Nickname: " << list[i].nickname << std::endl;
	std:: cout << "Phone number: " << list[i].phoneNumber << std::endl;
	std:: cout << "Darkest secret: " << list[i].darkestSecret << std::endl;
}

static void	printTruncatedString(std::string str)
{
	std::string	tmp = str;

	if (tmp.length() > 9)
	{
		tmp.resize(9);
		tmp.resize(10, '.');
	}
	else
	{
		for (int i = 0; tmp.length() + i < 10; i++)
			std::cout << " ";
	}
	std::cout << tmp;
}

static void	printContactList(Contact *list)
{
	int i = 0;

	while (!list[i].firstName.empty() && i < 8)
	{
		std::cout << "         " << i + 1 << " | ";
		printTruncatedString(list[i].firstName);
		std::cout << " | ";
		printTruncatedString(list[i].lastName);
		std::cout << " | ";
		printTruncatedString(list[i].nickname);
		std::cout << std::endl;
		i++;
	}
}

static bool	myIsDigit(std::string str)
{
	if (str.find_first_not_of("0123456789") == std::string::npos)
		return (true);
	else
		return (false);
}
void	PhoneBook::searchContact(Contact *list)
{
	std::string input;

	if (list[0].firstName.empty())
		std::cout << "Contact list is empty. Try adding a contact first." << std::endl;
	else
	{
		while (1)
		{
			printContactList(list);
			std::cout << "Enter the index of the contact you would like to search." << std::endl;
			getline(std::cin, input);
			if (input.empty())
				continue ;
			if (!myIsDigit(input) || stoi(input) < 1 || stoi(input) > 8)
				std::cout << "Wrong index." << std::endl;
			else if (list[stoi(input) - 1].firstName.empty())
				std::cout << "Empty contact index." << std::endl;
			else
			{
				printContactDetails(list, stoi(input) - 1);
				break ;
			}
		}
	}
}
