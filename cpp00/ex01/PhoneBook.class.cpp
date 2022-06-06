#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

/*****************/
/* addContact */
/*****************/

static void	fill_contact_info(std::string msg, std::string *str)
{
	while (1)
	{
		std::cout << msg << std::endl;
		getline(std::cin, *str);
		if (!str->empty())
			break ;
	}
}

void	PhoneBook::addContact(Contact *array)
{
	static int index = 0;

	if (index > 7)
	{
		std::cout << "INDEX RESET" << std::endl;
		index = 0;
		std::cout << "index = " << index << std::endl;
	}
	fill_contact_info("First name ?", &array[index].first_name);
	fill_contact_info("Last name ?", &array[index].last_name);
	fill_contact_info("Nickname ?", &array[index].nickname);
	fill_contact_info("Phone number ?", &array[index].phone_number);
	fill_contact_info("Darkest secret ?", &array[index].darkest_secret);
	index++;
}

/*****************/
/* searchContact */
/*****************/

static void	printContactDetails(Contact *array, int index)
{
	if (array[index].first_name.empty())
		std::cout << "Empty contact index." << std::endl;
	else
	{
		std:: cout << "First name: " << array[index].first_name << std::endl;
		std:: cout << "Last name: " << array[index].last_name << std::endl;
		std:: cout << "Nickname: " << array[index].nickname << std::endl;
		std:: cout << "Phone number: " << array[index].phone_number << std::endl;
		std:: cout << "Darkest secret: " << array[index].darkest_secret << std::endl;
	}
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

void	PhoneBook::searchContact(Contact *array)
{
	std::string userInput;
	int i = 0;

	while (!array[i].first_name.empty() && i < 8)
	{
		std::cout << "         " << i + 1 << " | ";
		printTruncatedString(array[i].first_name);
		std::cout << " | ";
		printTruncatedString(array[i].last_name);
		std::cout << " | ";
		printTruncatedString(array[i].nickname);
		std::cout << std::endl;
		i++;
	}
	std::cout << "Enter the index of the contact you would like to search." << std::endl;
	getline(std::cin, userInput);
	if (stoi(userInput) < 1 || stoi(userInput) > 8)
		std::cout << "Wrong index." << std::endl;
	else
		printContactDetails(array, stoi(userInput) - 1);
}