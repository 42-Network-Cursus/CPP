/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:24:43 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/08 16:51:54 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void		Bureaucrat::setGrade(int nb)
{
	this->_grade = nb;
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
