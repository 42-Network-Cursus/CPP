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
	~Form();
	Form(Form const & copy);
	Form&	operator=(Form const & rhs);

	Form(std::string name, int gradeToSign, int gradeToExecute);

	std::string	getName() const;
	bool		getSignature() const;
	int const	getGradeToSign() const;
	int const	getGradeToExecute() const;
	void		setSignature(bool sign);
	void		beSigned(Bureaucrat& bureaucrat);

	virtual void execute(Bureaucrat const & executor) = 0;

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