#ifndef PhoneBook_class_cpp
# define PhoneBook_class_cpp

# include "Contact.class.hpp"
class PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);

	Contact array[8];
};

#endif