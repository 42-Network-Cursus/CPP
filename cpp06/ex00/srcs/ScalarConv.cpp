#include "ScalarConv.hpp"

// TO DEFINE
ScalarConv::ScalarConv()
{
	_literal.isDisplayable = false;
}
// ScalarConv(char *input);
ScalarConv::~ScalarConv()
{

}
// ScalarConv(ScalarConv const & rhs);
// ScalarConv& operator=(ScalarConv const & rhs);

bool	ScalarConv::checkSpecialCases(std::string str)
{
	std::string SpecialCases[] = {
		"-inff",
		"+inff",
		"-inf",
		"+inf",
		"nanf",
		"nan"
	};

	int i = 0;
	for ( ; i < 6; i++)
	{
		if (!str.compare(SpecialCases[i]))
		{
			_literal.Special = SpecialCases[i];
			return (true);
		}
	}
	return (false);

	//fuck this
	// if (i < 6)
	// {
	// 	if (i < 4)
	// 	{
	// 		if (i < 2)
	// 			_literal.Float = std::numeric_limits<float>::infinity();
	// 		else
	// 			_literal.Double = std::numeric_limits<double>::infinity();		
	// 	}
	// 	else
	// 	{
	// 		if (i == 4)
	// 			_literal.Float = NAN; // NAN is Float type
	// 		else
	// 			_literal.Double = static_cast<double>(NAN);
	// 	}
	// 	return (true);
	// }
	// return (false);
}



void	ScalarConv::getLiteralType(std::string str)
{
	std::string			digits = "0123456789";
	size_t				pos = 0;
	std::stringstream	ss;

	if (checkSpecialCases(str))
		_type = SPECIAL;
	else
	{
		pos = str.find_first_of(digits, pos);
		if (pos == std::string::npos)
		{
			if (str.length() == 1)
			{
				_type = CHAR;
				_literal.Char = str[0];
				_literal.isDisplayable = true;
			}
			else
				throw LiteralException();
		}
		else
		{
			if (str[0] == '-')
				pos = 1;
			else
				pos = 0;
			pos = str.find_first_not_of(digits, pos);
			if (pos == std::string::npos)
			{
				_type = INT;
				ss << str;
				ss >> _literal.Int;
				if (is_printable(_literal.Int))
					_literal.isDisplayable = true;
			}
			else if (str[pos] == 'f')
			{
				
				// pos = str.find_first_not_of(digits, pos);
				if (pos + 1 == str.length())
				{
					_type = FLOAT;
					_literal.Float = static_cast<float>(atof(str.c_str()));
					if (is_printable(_literal.Float))
						_literal.isDisplayable = true;
				}
				else
					throw LiteralException();
			}
			else if (str[pos] == '.')
			{
				pos++;
				if (pos != str.find_first_of(digits, pos))
					throw LiteralException();
				pos = str.find_first_not_of(digits, pos);
				if (str[pos] == 'f')
				{
					if (pos + 1 == str.length())
					{
						_type = FLOAT;
						_literal.Float = static_cast<float>(atof(str.c_str()));
						if (is_printable(_literal.Float))
						_literal.isDisplayable = true;
					}
					else
						throw LiteralException();
				}
				else if (pos == std::string::npos)
				{
					_type = DOUBLE;
					_literal.Double = atof(str.c_str());
					if (is_printable(_literal.Double))
						_literal.isDisplayable = true;
				}
				else
					throw LiteralException();
			}
		}
	}
}

void	ScalarConv::convert()
{
	switch (_type)
	{
		case CHAR:
			_literal.Int = _literal.Char;
			_literal.Float = _literal.Char;
			_literal.Double = _literal.Char;
			break;
		case INT:
			if (_literal.isDisplayable)
				_literal.Char = static_cast<int>(_literal.Int);
			else
				_literal.Special = "Non displayable";
			_literal.Float = _literal.Int;
			_literal.Double = _literal.Int;
			break;
		case FLOAT:
			if (_literal.isDisplayable)
				_literal.Char = static_cast<float>(_literal.Float);
			else
				_literal.Special = "Non displayable";
			_literal.Int = static_cast<float>(_literal.Float);
			_literal.Double = _literal.Float;
			break;
		case DOUBLE:
			if (_literal.isDisplayable)
				_literal.Char = static_cast<double>(_literal.Double);
			else
				_literal.Special = "Non displayable";
			_literal.Int = static_cast<double>(_literal.Double);
			_literal.Float = static_cast<double>(_literal.Double);
			break;
		case SPECIAL:
			break;
		default:
			break;
	}
}

// void	ScalarConv::displayConversions()
// {
// 	t_displayList convList[] = {
// 		{"char : ", &convToChar},
// 		{"int : ", &convToInt},
// 		{"float : ", &convToFloat},
// 		{"double : ", &convToDouble}
// 	}

// 	for (int i = 0; i < 4; i++)
// 	{
// 		std::cout << convList[i].msg;
// 		convList[i].fnPtr();
// 	}
// }

char	ScalarConv::getChar() const
{
	return (_literal.Char);
}

int		ScalarConv::getInt() const
{
	return (_literal.Int);
}

float		ScalarConv::getFloat() const
{
	return (_literal.Float);
}

double		ScalarConv::getDouble() const
{
	return (_literal.Double);
}

std::string		ScalarConv::getSpecial() const
{
	return (_literal.Special);
}

bool		ScalarConv::getDisplayStatus()
{
	return (_literal.isDisplayable);
}