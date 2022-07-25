#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
Form("Robotomy", 72, 45),
_target("")
{
	//Constructor
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
Form("Robotomy", 72, 45),
_target(target)
{
	//Constructor
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	//Deconstructor
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & rhs) :
Form(rhs.getName(), rhs.getGradeToSign(), rhs.getGradeToExecute()),
_target(rhs.getTarget())
{
	//Copy constructor
	this->setSignature(rhs.getSignature());
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	_target = rhs.getTarget();
	this->setSignature(rhs.getSignature());
	return (*this);
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (_target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	this->checkExecutePrivilege(executor);
	srand(time(NULL));
	int nb = rand() % 2;
	std::cout << "nb : " << nb << std::endl;
	std::cout << "Drilling noises..." << std::endl;
	if (nb)
		std::cout << this->getTarget() << " has been robotomized !" << std::endl;
	else
		std::cout << this->getTarget() << "'s robotomy failed ..." << std::endl;
}
