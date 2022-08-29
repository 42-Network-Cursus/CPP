#include "ScalarConv.hpp"

ScalarConv::ScalarConv()
{
	// std::cout << "Constructor called" << std::endl;
	_literal.isDisplayable = false;
}

ScalarConv::~ScalarConv()
{
	// std::cout << "Destructor called" << std::endl;
}

ScalarConv::ScalarConv(ScalarConv const & rhs)
{
	(void)rhs;
	// std::cout << "Copy constructor not implemented\n";
}

ScalarConv& ScalarConv::operator=(ScalarConv const & rhs)
{
	(void)rhs;
	// std::cout << "Assigment operator not implemented\n";
	return (*this);
}

bool	ScalarConv::isSpecialCase(std::string str)
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
}

bool	ScalarConv::isChar(std::string & str, std::string & digits)
{
	size_t	pos = 0;
	
	pos = str.find_first_of(digits, pos);
	if (pos == std::string::npos && str.length() == 1)
	{
		_literal.Char = str[0];
		_literal.isDisplayable = true;
		return (true);
	}
	return (false);
}

bool	ScalarConv::isInt(std::string & str, std::string & digits)
{
	size_t	pos = 0;
	std::stringstream	ss;
	
	if (str[0] == '-')
		pos += 1;
	pos = str.find_first_not_of(digits, pos);
	if (pos == std::string::npos)
	{
		ss << str;
		ss >> _literal.Int;
		if (is_printable(_literal.Int))
			_literal.isDisplayable = true;
		return (true);
	}
	return (false);
}

bool	ScalarConv::isFloat(std::string & str, std::string & digits)
{
	size_t	pos = 0;

	if (str[0] == '-')
		pos += 1;
	pos = str.find_first_not_of(digits, pos);
	if (str[pos] == 'f')
	{
		pos = str.find_first_not_of(digits, pos);
		if (pos + 1 == str.length())
		{
			_literal.Float = static_cast<float>(atof(str.c_str()));
			if (is_printable(_literal.Float))
				_literal.isDisplayable = true;
			return (true);
		}
	}
	else if (str[pos] == '.')
	{
		pos++;
		if (pos != str.find_first_of(digits, pos))
			return (false);
		pos = str.find_first_not_of(digits, pos);
		if (str[pos] == 'f')
		{
			if (pos + 1 == str.length())
			{
				_literal.Float = static_cast<float>(atof(str.c_str()));
				if (is_printable(_literal.Float))
					_literal.isDisplayable = true;
				return (true);
			}
		}
	}
	return (false);
}

bool	ScalarConv::isDouble(std::string & str, std::string & digits)
{
	size_t	pos = 0;

	if (str[0] == '-')
		pos += 1;
	pos = str.find_first_not_of(digits, pos);
	if (str[pos] == '.')
	{
		pos++;
		if (pos != str.find_first_of(digits, pos))
			return (false);
		pos = str.find_first_not_of(digits, pos);
		if (pos == std::string::npos)
		{
			_literal.Double = atof(str.c_str());
			if (is_printable(_literal.Double))
				_literal.isDisplayable = true;
			return (true);
		}
	}
	return (false);
}

void	ScalarConv::getLiteralType(std::string str)
{
	std::string			digits = "0123456789";

	if (isSpecialCase(str))
		_type = SPECIAL;
	else if (isChar(str, digits))
		_type = CHAR;
	else if (isInt(str, digits))
		_type = INT;
	else if (isFloat(str, digits))
		_type = FLOAT;
	else if (isDouble(str, digits))
		_type = DOUBLE;
	else
		throw LiteralException();
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
				_literal.Char = static_cast<char>(_literal.Int);
			else
				_literal.Special = "Non displayable";
			_literal.Float = static_cast<float>(_literal.Int);
			_literal.Double = _literal.Int;
			break;
		case FLOAT:
			if (_literal.isDisplayable)
				_literal.Char = static_cast<char>(_literal.Float);
			else
				_literal.Special = "Non displayable";
			_literal.Int = static_cast<int>(_literal.Float);
			_literal.Double = _literal.Float;
			break;
		case DOUBLE:
			if (_literal.isDisplayable)
				_literal.Char = static_cast<char>(_literal.Double);
			else
				_literal.Special = "Non displayable";
			_literal.Int = static_cast<int>(_literal.Double);
			_literal.Float = static_cast<float>(_literal.Double);
			break;
		case SPECIAL:
			if (!_literal.Special.compare("nan") || !_literal.Special.compare("nanf"))
			{
				_literal.Float = NAN;
				_literal.Double = NAN;
				_literal.Special = "impossible";
			}
			else if (!_literal.Special.compare("-inff") || !_literal.Special.compare("+inff")
					|| !_literal.Special.compare("-inf") || !_literal.Special.compare("+inf"))
			{
				_type = INF;
				_literal.Int = std::numeric_limits<int>::infinity();
				_literal.Float = std::numeric_limits<float>::infinity();
				_literal.Double = std::numeric_limits<double>::infinity();	
				_literal.Special = "Non displayable";
			}
			break;
		default:
			throw LiteralException();
	}
}

void	ScalarConv::displayConversions(int precision)
{
	if (_literal.isDisplayable && _type != SPECIAL)
		std::cout << _literal.Char << std::endl;
	else
		std::cout << _literal.Special << std::endl;
	if (_type != SPECIAL)
		std::cout << _literal.Int << std::endl;
	else
		std::cout << _literal.Special << std::endl;
	std::cout << std::fixed << std::setprecision(precision);
	std::cout << _literal.Float << "f" << std::endl;
	std::cout << _literal.Double << std::endl;
}

int		ScalarConv::getPrecision(std::string str) const
{
	size_t pos = 0;

	pos = str.find_first_of(".", pos);
	switch (_type)
	{
		case FLOAT:
			return (str.length() - pos - 2);
		case DOUBLE:
			return (str.length() - pos - 1);
		default:
			return (1);
	}
}

bool	is_printable(double nb)
{
	if (nb < 32 || nb > 126)
		return false;
	return true;
}