#ifndef SCHRUBBERYCREATIONFORM_HPP
# define SCHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string const _target;
public:
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const & form);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const & rhs);

	std::string	getTarget() const;
	void execute(Bureaucrat const & executor);
};

#endif