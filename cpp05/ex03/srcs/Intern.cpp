#include "Intern.hpp"

Intern::Intern()
{
	//Constructor
}

Intern::~Intern()
{
	//Deconstructor
}

Intern::Intern(Intern const & rhs)
{
	(void)rhs;
	//Nothing to do for copy
}

Intern& Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}

static Form*	makeShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static Form*	makeRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static Form*	makePresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	t_formList formList[] = 
	{
		{"shrubbery creation", &makeShrubberyCreationForm},
		{"robotomy request", &makeRobotomyRequestForm},
		{"presidential pardon", &makePresidentialPardonForm}
	};

	Form* ret = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (formList[i].formName == name)
		{
			ret = formList[i].fnPtr(target);
			std::cout << "Intern creates " << name << std::endl;
			return (ret);
		}
	}
	std::cout << "Intern could not find " << name << " form" << std::endl;
	return (ret);
}
