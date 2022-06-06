#include <iostream>
#include <string>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

int	main()
{
	std::string	usr_input;
	PhoneBook	directory;

	std::cout << "This is a phonebook. Use it to add and/or search your contacts." << std::endl;
	while (1)
	{
		std::cout << "Enter ADD, SEARCH or EXIT." << std::endl;
		std::getline(std::cin, usr_input);
		if (usr_input == "ADD")
		{
			directory.addContact(directory.array);
		}
		else if (usr_input == "SEARCH")
		{
			directory.searchContact(directory.array);
		}
		else if (usr_input == "EXIT")
		{
			std::cout << "Exit program. Sure hope you saved those contacts elsewhere!" << std::endl;
			return (0);
		}
	}
	return (0);
}