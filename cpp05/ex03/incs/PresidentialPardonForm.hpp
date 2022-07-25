#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include <string>

class PresidentialPardonForm : public Form
{
private:
	std::string _target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const & rhs);
	PresidentialPardonForm& operator=(PresidentialPardonForm const & rhs);

	std::string	getTarget() const;
	void		execute(Bureaucrat const & executor);
};

#endif