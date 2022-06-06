#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"
# include <iostream>
# include <string>

class PhoneBook 
{
public:
	PhoneBook(void);
	~PhoneBook(void);
	
	Contact array[8];

	void	addContact(Contact *array);
	void	searchContact(Contact *array);
};

#endif