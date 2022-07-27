#ifndef SCALARCONV_HPP
# define SCALARCONV_HPP

# include <limits>


# define CHAR		0
# define INT			1
# define FLOAT		2
# define DOUBLE		3
# define SPECIALCASE	4

class ScalarConv
{
private:
	int		_type;
	void	_literal;
public:
	SclrConv();
	SclrConv(char *input);
	~SclrConv();
	SclrConv(SclrConv const & rhs)
	SclrConv& operator=(SclrConv const & rhs);

	void	setType(int n);
	int		getType() const;

	void*	getLiteralype(std::string str)
	bool	checkSpecialCases(std::string str)

	class LiteralException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("Argument not of literal type char, int, float or double");
		}
	};
};



#endif
