#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>

class PhoneBook 
{
public:
	Contact _list[8];

	void	addContact(Contact *list);
	void	searchContact(Contact *list);
};

#endif