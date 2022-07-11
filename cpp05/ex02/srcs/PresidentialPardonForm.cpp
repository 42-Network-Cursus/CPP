#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("Pardon", 25, 5),
_target(target)
{
	//Constructor
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	//Deconstructor
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & rhs) :
Form (rhs.getName(), rhs.getGradeToSign(), rhs.getGradeToExecute()),
_target(rhs.getTarget())
{
	//Copy constructor
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	_target = rhs.getTarget();
	this->setSignature(rhs.getSignature());
	return (*this);
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (_target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	this->checkExecutePrivilege(executor);
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
