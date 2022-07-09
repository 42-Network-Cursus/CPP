#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
Form("Shrubbery", 145, 137),
_target(target)
{
	//Default constructor
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	//Desctructor
	std::cout << this->getName() << " Shrubbery deconstruction" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & form) :
Form(this->getName(), 145, 137)
{
	this->setSignature(form.getSignature());
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	this->setSignature(rhs.getSignature());
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor)
{

}