#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	{
		Intern someRandomIntern;
		Form* rrf = NULL;
		
		rrf = someRandomIntern.makeForm("random form", "Bender");
	}
	{
		Intern someRandomIntern;
		Form* rrf = NULL;
		
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		if (rrf)
		{
			Bureaucrat bcrat1("Dude", 1);
			bcrat1.signForm(*rrf);
			rrf->execute(bcrat1);
			delete rrf;
		}
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		if (rrf)
		{
			Bureaucrat bcrat1("Dude", 1);
			bcrat1.signForm(*rrf);
			rrf->execute(bcrat1);
			delete rrf;
		}
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if (rrf)
		{
			Bureaucrat bcrat1("Dude", 1);
			bcrat1.signForm(*rrf);
			rrf->execute(bcrat1);
			delete rrf;
		}
	}

	return (0);
}