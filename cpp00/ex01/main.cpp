#include <iostream>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

int	main()
{
	char	usr_input[512];

	std::cout << "This is a phonebook. Use it to add or search for contacts." << std::endl;
	std::cout << "What would you like to do ?" << std::endl;
	
	while (1)
	{
		std::cout << "Enter ADD, SEARCH or EXIT." << std::endl;
		std::cin >> usr_input;
		if (usr_input == "ADD")
		{
			
		}
		else if (usr_input == "SEARCH")
		{

		}
		else if (usr_input == "EXIT")
		{
			std::cout << "Exit program. Sure hope you saved those contacts elsewhere !" << std::endl;
			return (0);
		}
		else
			continue ;
	}
}