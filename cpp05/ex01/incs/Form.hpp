#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class Form
{
private:
	std::string const	_name;
	bool				_signature;
	int			const	_gradeToSign;
	int 		const	_gradeToExecute;
public:
	Form();
	Form(std::string name, int gradeToSign, int gradeToExecute);
	~Form();
	Form(Form const & copy);
	Form&	operator=(Form const & rhs);

	std::string		getName() 			const;
	bool			getSignature()		const;
	int				getGradeToSign()	const;
	int				getGradeToExecute() const;

	void		setSignature(bool sign);
	void		beSigned(Bureaucrat& bureaucrat);

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("grade is too damn low");
			}
	};

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("grade is too damn high");
			}
	};
};

std::ostream&	operator<<(std::ostream& os, Form& form);
#endif