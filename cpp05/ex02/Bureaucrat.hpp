/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:24:46 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/09 13:09:13 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & copy);
	Bureaucrat& operator=(Bureaucrat const & rhs);
	
	std::string getName() const;
	int			getGrade() const;
	void		promoteBureaucrat();
	void		demoteBureaucrat();

	void		signForm(Form& form);
	void		executeForm(Form const & form);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Can't go above grade 1");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Can't go below grade 150");
			}
	};
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const & rhs);

#endif