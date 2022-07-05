#ifdef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>

class Bureaucrat
{
private:
	std::string const	_name;
	int					grade;
public:
	std::string getName() const;
	int			getGrade() const;
};

#endif