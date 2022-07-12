/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:47:02 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/12 10:24:12 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/* addContact */

static std::string	fillContactInfo(std::string msg)
{
	std::string input;

	while (1)
	{
		std::cout << msg << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof() || std::cin.fail())
		{
    		std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl << "Use EXIT to quit" << std::endl;
		}
		if (input == "EXIT")
		{
			std::cout << "Exit program. Sure hope you saved those contacts elsewhere!" << std::endl;
			exit(0);
		}
		if (!input.empty())
			break ;
	}
	return (input);
}

void	PhoneBook::addContact()
{
	static int i = 0;

	if (i > 7)
		i = 0;
	this->_list[i].setFirstName(fillContactInfo("First name ?"));
	this->_list[i].setLastName(fillContactInfo("Last name ?"));
	this->_list[i].setNickname(fillContactInfo("Nickname ?"));
	this->_list[i].setPhoneNumber(fillContactInfo("Phone number ?"));
	this->_list[i].setDarkestSecret(fillContactInfo("Darkest secret ?"));
	i++;
}

/* searchContact */

static void	printContactDetails(Contact *list, int idx)
{
	std:: cout << "First name: " << list[idx].getFirstName() << std::endl;
	std:: cout << "Last name: " << list[idx].getLastName() << std::endl;
	std:: cout << "Nickname: " << list[idx].getNickname() << std::endl;
	std:: cout << "Phone number: " << list[idx].getPhoneNumber() << std::endl;
	std:: cout << "Darkest secret: " << list[idx].getDarkestSecret() << std::endl;
}

static std::string	truncateString(std::string str)
{
	std::string	ret = str;

	if (ret.length() > 9)
	{
		ret.resize(9);
		ret.resize(10, '.');
	}
	return (ret);
}

static void	printContactList(Contact *list)
{
	std::cout << std::setw(10) << std::setfill(' ') << "INDEX" << " | ";
	std::cout << std::setw(10) << std::setfill(' ') << "FIRST NAME" << " | ";
	std::cout << std::setw(10) << std::setfill(' ') << "LAST NAME" << " | ";
	std::cout << std::setw(10) << std::setfill(' ') << "NICKNAME" << std::endl;

	int i = 0;
	while (!list[i].getFirstName().empty() && i < 8)
	{
		std::string firstName = truncateString(list[i].getFirstName());
		std::string lastName = truncateString(list[i].getLastName());
		std::string nickname = truncateString(list[i].getNickname());

		std::cout << std::setw(10) << std::setfill(' ') << i + 1 << " | ";
		std::cout << std::setw(10) << std::setfill(' ') << firstName << " | ";
		std::cout << std::setw(10) << std::setfill(' ') << lastName << " | ";
		std::cout << std::setw(10) << std::setfill(' ') << nickname << std::endl;
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
void	PhoneBook::searchContact()
{
	std::string 		input;
	int					intInput = -1;

	if (this->_list[0].getFirstName().empty())
		std::cout << "Contact list is empty. Try adding a contact first." << std::endl;
	else
	{
		while (1)
		{
			printContactList(this->_list);
			std::cout << "Enter the index of the contact you would like to search." << std::endl;
			std::getline(std::cin, input);
			if (std::cin.eof() || std::cin.fail())
			{
				std::cin.clear();
				clearerr(stdin);
				std::cout << std::endl << "Use EXIT to quit" << std::endl;
			}
			if (input == "EXIT")
			{
				std::cout << "Exit program. Sure hope you saved those contacts elsewhere!" << std::endl;
				exit(0);
			}
			if (input.empty())
				continue ;
			intInput = atoi(input.c_str());
			std::cout << intInput << std::endl;
			if (!myIsDigit(input) || intInput < 1 || intInput > 8)
				std::cout << "Wrong index." << std::endl;
			else if (this->_list[intInput - 1].getFirstName().empty())
				std::cout << "Empty contact index." << std::endl;
			else
			{
				printContactDetails(this->_list, intInput - 1);
				break ;
			}
		}
	}
}
