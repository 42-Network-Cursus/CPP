#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :
_name("Default"),
_grade(150)
{
	//constructor
}

Bureaucrat::Bureaucrat(std::string name) :
_name(name)
{
	//name constructor
}

Bureaucrat::~Bureaucrat()
{
	//deconstructor
}

Bureaucrat::Bureaucrat(Bureaucrat& const copy) :
_grade(copy._grade),
_name(copy._name)
{
	//copy constructor
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& const rhs)
{
	this->_name = rhs._name;
	this->_grade = rhs._grade;
	return (*this);
}

std::ostream Bureaucrat::operator<<(ostream& os)
{
	std::cout << this->_name << ", bureaucrat grade " << this->_grade << "." << std::endl;
	return (os);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int			Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void		Bureaucrat::promoteBureaucrat()
{
	try
	{

	}
	catch (GradeTooHighException& e)
	{

	}
}

void		Bureaucrat::demoteBureaucrat()
{
	try
	{

	}
	catch (GradeTooLowException& e)
	{
		
	}
}
