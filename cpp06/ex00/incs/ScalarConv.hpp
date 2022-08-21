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


char << int << float << double


typedef struct s_literal
{
	unsigned char		Char;
	int			Int;
	float		Float;
	double		Double;
	std::string	Special;
	bool		isDisplayable;
}				t_literal;

class ScalarConv
{
private:
	int			_type;
	t_literal	_literal;

public:
	ScalarConv();
	ScalarConv(char *input);
	~ScalarConv();
	ScalarConv(ScalarConv const & rhs);
	ScalarConv& operator=(ScalarConv const & rhs);

	void	setType(int n);
	int		getType() const;

	void	getLiteralType(std::string str);
	bool	checkSpecialCases(std::string str);

	void	displayConversions();
	void	convert();

	char		getChar() const;
	int			getInt() const;
	float		getFloat() const;
	double		getDouble() const;

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

/*		************	*/
/*		**	UTILS **	*/
/*		************	*/

bool	is_printable(double nb);

#endif
