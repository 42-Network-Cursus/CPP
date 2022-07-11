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

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & rhs) :
Form(rhs.getName(), 145, 137),
_target(rhs.getTarget())
{
	this->setSignature(rhs.getSignature());
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	_target = rhs.getTarget();
	this->setSignature(rhs.getSignature());
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	this->checkExecutePrivilege(executor);
	std::string fileName = this->getTarget() + "_shrubbery";
	std::ofstream	file(fileName.c_str());
	file << "       _-_       " << std::endl;
	file << "    /~~   ~~\\    " << std::endl;
	file << "  /~~       ~~\\  " << std::endl;
	file << " {             } " << std::endl;
	file << " \\  _-     -_  / " << std::endl;
	file << "   ~  \\\\ // ~  " << std::endl;
	file << "  _- - | | _- _  " << std::endl;
	file << "    _ -| |   -_  " << std::endl;
	file << "      // \\\\      " << std::endl;
	std::cout << fileName << " has received a happy little ASCII tree." << std::endl;
}