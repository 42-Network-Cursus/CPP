#include "ScalarConv.hpp"


bool	ScalarConv::checkSpecialCases(std::string str)
{
	std::string SpecialCases[] = {
		"-inff",
		"+inff",
		"-inf",
		"+inf",
		"nanf",
		"nan"
	}

	int i = 0
	for ( ; i < 6; i++)
	{
		if (!str.compare(SpecialCases[i]))
			break ;
	}
	if (i < 6)
	{
		if (i < 4)
		{
			if (i < 2)
				_literal = std::numeric_limits<float>::infinity();
			else
				_literal = std::numeric_limits<double>::infinity();		
		}
		else
		{
			if (i == 4)
				_literal = NAN; // NAN is Float type
			else
				_literal = static_cast<double>(NAN);
		}
		return (true);
	}
	return (false);
}

void	ScalarConv::getLiteralype(std::string str)
{
	std::string digits = "0123456789";
	size_t	pos = 0;

	if (checkSpecialCases(str))
		_type = SPECIALCASE;
	else
	{
		if (str[0].compare("-") == 0)
			pos = 1;
		pos = str.find_first_not_of(digits, pos);
		if (str[pos] == '.' OR str[pos] == 'f')
		{
			// double or float
		}
		else
		{
			// Can be int here 

			if (str.size > 1)
				throw LiteralException();
			else
			{
				_type = CHAR;
				_literal = str[0];
			}
		}
		


		pos = str.find_first_of(digits);
		if (strPos == std::string::npos)
		{
			if (str.size > 1)
				throw LiteralException();
			else
			{
				_type = CHAR;
				_literal = str[0];
			}
		}	
		else
		{
			if (str[0] == '-')
				pos = 1;
			pos = str.find_first_not_of(digits, pos);
			if (str[pos] == '.' OR str[pos] == 'f')
			{
				// double or float
			}
			else
			{
				
			}
		}
	}
}