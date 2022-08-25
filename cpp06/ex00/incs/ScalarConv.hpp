#ifndef SCALARCONV_HPP
# define SCALARCONV_HPP

# include <limits>
# include <string>
# include <iostream>
# include <cmath>
# include <sstream>
# include <cstdlib>
# include <iomanip>

# define CHAR			0
# define INT			1
# define FLOAT			2
# define DOUBLE			3
# define SPECIAL		4

typedef struct s_literal
{
	unsigned char	Char;
	int				Int;
	float			Float;
	double			Double;
	std::string		Special;
	bool			isDisplayable;
}				t_literal;

class ScalarConv
{
private:
	int			_type;
	t_literal	_literal;
public:
	ScalarConv();
	~ScalarConv();
	ScalarConv(ScalarConv const & rhs);
	ScalarConv& operator=(ScalarConv const & rhs);

	void	getLiteralType(std::string str);
	bool	isSpecialCase(std::string str);
	bool	isChar(std::string & str, std::string & digits);
	bool	isInt(std::string & str, std::string & digits);
	bool	isFloat(std::string & str, std::string & digits);
	bool	isDouble(std::string & str, std::string & digits);

	void	convert();
	void	displayConversions(int precision);
	int		getPrecision(std::string str) const;

	class LiteralException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("Argument not of literal type char, int, float or double");
		}
	};

	typedef void (*fn)();
	typedef struct s_displayList
	{
		public:
			std::string msg;
			fn			fnPtr;
	}				t_displayList;
};

bool	is_printable(double nb);

#endif
