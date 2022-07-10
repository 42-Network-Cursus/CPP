#include "Form.hpp"

std::ostream&	operator<<(std::ostream& os, Form& form)
{
	std::cout << "Name: " << form.getName() << std::endl;
	if (form.getSignature())
		std::cout << "Signed: Yes" << std::endl;
	else
		std::cout << "Signed: No" << std::endl;
	std::cout << "Grade to sign: " << form.getGradeToSign() << std::endl;
	std::cout << "Grade to execute: " << form.getGradeToExecute() << std::endl;
	return (os);
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute)
try : _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _name(name), _signature(false)
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

bool		Form::getSignature() const
{
	return (_signature);
}

int const	Form::getGradeToSign() const
{
	return (_gradeToSign);
}

int const	Form::getGradeToExecute() const
{
	return (_gradeToExecute);
}

void		Form::setSignature(bool sign)
{
	_signature = sign;
}

void		Form::beSigned(Bureaucrat& bureaucrat)
{	try
	{
		bureaucrat.signForm(*this);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}


