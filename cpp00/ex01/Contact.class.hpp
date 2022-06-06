#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>

class Contact 
{
public:
	Contact(void);
	~Contact(void);

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	darkest_secret;
	std::string phone_number;
};

#endif