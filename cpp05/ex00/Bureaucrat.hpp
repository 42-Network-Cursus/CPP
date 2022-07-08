#ifdef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>

class GradeTooHighException : std::exception 
{

}

// class GradeTooLowException : std::exception
// {

// }

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string name);
	Bureaucrat(Bureaucrat& const copy);
	Bureaucrat& operator=(Bureaucrat& const rhs);

	std::ostream operator<<(ostream& os);
	std::string getName() const;
	int			getGrade() const;
	void		promoteBureaucrat();
	void		demoteBureaucrat();

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("")
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			
	};
};

#endif