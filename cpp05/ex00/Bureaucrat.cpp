/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:24:43 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/09 10:04:57 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) :
_name(name),
_grade(150)
{
	//name constructor
	try
	{
		if (grade > 150)
			throw GradeTooLowException();
		else if (grade < 1)
			throw GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch (GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
	//deconstructor
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy) :
_grade(copy._grade),
_name(copy._name)
{
	//copy constructor
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->_grade = rhs.getGrade();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const & rhs)
{
	std::cout << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
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
		if (this->_grade == 1)
			throw GradeTooHighException();
		else
		{
			this->_grade--;
			std::cout << this->getName() << " just got promoted to " << this->getGrade() << std::endl; 
		}
	}
	catch (GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void		Bureaucrat::demoteBureaucrat()
{
	try
	{
		if (this->_grade == 150)
			throw GradeTooLowException();
		else
		{
			this->_grade++;
			std::cout << this->getName() << " gets demoted to " << this->getGrade() << std::endl; 
		}
	}
	catch (GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
}