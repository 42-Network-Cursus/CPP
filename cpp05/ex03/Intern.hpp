#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	~Intern();
	Intern(Intern const & rhs);
	Intern& operator=(Intern const & rhs);

	Form*	makeForm(std::string name, std::string target);

	typedef Form* (*fn)(std::string target);
	typedef struct 	s_formList
	{
		public:
			std::string formName;
			fn			fnPtr;
	}				t_formList;
};

#endif