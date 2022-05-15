#ifndef Contact_class_cpp
# define Contact_class_cpp

# include <string>

class Contact {

public:

	Contact(void);
	~Contact(void);

	string	first_name;
	string	last_name;
	string	nickname;
	string	phone_number;
	string	darkest_secret;
};

#endif