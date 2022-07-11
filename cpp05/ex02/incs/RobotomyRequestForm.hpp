#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include <ctime>
# include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string _target;
public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const & rhs);
	RobotomyRequestForm& operator=(RobotomyRequestForm const & rhs);

	std::string	getTarget() const;
	void 		execute(Bureaucrat const & executor);
};

#endif