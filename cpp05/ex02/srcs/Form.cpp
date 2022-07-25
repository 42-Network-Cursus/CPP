#include "Form.hpp"

std::ostream&	operator<<(std::ostream& os, Form& form)
{
	std::cout << "Name: " << form.getName() << std::endl;
	if (form.getSignature())
		std::cout << "Signed: true" << std::endl;
	else
		std::cout << "Signed: false" << std::endl;
	std::cout << "Grade to sign: " << form.getGradeToSign() << std::endl;
	std::cout << "Grade to execute: " << form.getGradeToExecute() << std::endl;
	return (os);
}

Form::Form() :
_name(""),
_signature(false),
_gradeToSign(150),
_gradeToExecute(150)
{
	//Constructor
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute)
try : 
_name(name),
_signature(false),
_gradeToSign(gradeToSign),
_gradeToExecute(gradeToExecute)
{
	if (gradeToSign > 150)
		throw GradeTooLowException();
	else if (gradeToSign < 1)
		throw GradeTooHighException();
	if (gradeToExecute > 150)
		throw GradeTooLowException();
	else if (gradeToExecute < 1)
		throw GradeTooHighException();
}
catch (std::exception& e)
{
	std::cout << "Construction failed : ";
}

Form::~Form()
{
	//Deconstructor
	std::cout << this->getName() << " Form deconstructed" << std::endl;
}

Form::Form(Form const & copy) :
_name(copy.getName()),
_signature(copy.getSignature()),
_gradeToSign(copy.getGradeToSign()),
_gradeToExecute(copy.getGradeToExecute())
{
	//Copy constructor
}

Form&	Form::operator=(Form const & rhs)
{
	_signature = rhs.getSignature();
	return (*this);
}

std::string	Form::getName() const
{
	return (_name);
}

bool	Form::getSignature() const
{
	return (_signature);
}

int 	Form::getGradeToSign() const
{
	return (_gradeToSign);
}

int 	Form::getGradeToExecute() const
{
	return (_gradeToExecute);
}

void	Form::setSignature(bool sign)
{
	_signature = sign;
}

void		Form::beSigned(Bureaucrat& bureaucrat)
{
	bureaucrat.signForm(*this);
}

void		Form::checkExecutePrivilege(Bureaucrat const & executor)
{
	if (this->getGradeToExecute() < executor.getGrade())
		throw ExecuteGradeTooLow();
	if (this->getSignature() == false)
		throw FormNotSigned();
}
