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
	};

	int i = 0;
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
				_literal.Float = std::numeric_limits<float>::infinity();
			else
				_literal.Double = std::numeric_limits<double>::infinity();		
		}
		else
		{
			if (i == 4)
				_literal.Float = NAN; // NAN is Float type
			else
				_literal.Double = static_cast<double>(NAN);
		}
		return (true);
	}
	return (false);
}

void	ScalarConv::getLiteralType(std::string str)
{
	std::string digits = "0123456789";
	size_t	pos = 0;
	std::stringstream ss;

	if (checkSpecialCases(str))
		_type = SPECIALCASE;
	else
	{
		if (str[0] == '-') //str.conv To Char ?
			pos = 1;
		pos = str.find_first_not_of(digits, pos);
		if (pos == std::string::npos)
		{
			if (str[0] == '-')
			{
				_type = CHAR;
				_literal.Char = str[0];
			}
			else
			{
				_type = INT;
				ss << str;
				ss >> _literal.Int;
			}
		}
		else if (str[pos] == 'f')
		{
			pos = str.find_first_not_of(digits, pos);
			if (pos == std::string::npos)
			{
				_type = FLOAT;
				_literal.Float = static_cast<float>(atof(str.c_str()));
			}
			else
				throw LiteralException();
		}
		else if (str[pos] == '.')
		{
			pos = str.find_first_not_of(digits, pos);
			if (str[pos] == 'f')
			{
				pos = str.find_first_not_of(digits, pos);
				if (pos == std::string::npos)
				{
					_type = FLOAT;
					_literal.Float = static_cast<float>(atof(str.c_str()));
				}
				else
					throw LiteralException();
			}
			else if (pos == std::string::npos)
			{
				_type = DOUBLE;
				_literal.Double = atof(str.c_str());
			}
			else
				throw LiteralException();
		}
		else
			throw LiteralException();
	}
}

void	ScalarConv::convToChar()
{
	switch (_type)
	{
		case CHAR:
			std::cout << _literal.Char << std::endl;
		case INT:
			if (is_printable(_literal.Int))
				std::cout << static_cast<char>(_literal.Int) << std::endl;
			else
				std::cout << "not displayable" << std::endl;
		case FLOAT:
			if (is_printable(_literal.Float))
				std::cout << static_cast<char>(_literal.Float) << std::endl;
			else
				std::cout << "not displayable" << std::endl;
		case DOUBLE:
			if (is_printable(_literal.Double))
				std::cout << static_cast<char>(_literal.Double) << std::endl;
			else
				std::cout << "not displayable" << std::endl;
		case SPECIALCASE:
		default:
	}
}

void	ScalarConv::convToInt()
{
	switch (_type)
	{
		case CHAR:
			std::cout << static_cast<int>(_literal.Char) << std::endl; // ????
		case INT:
			std::cout << _literal.Int << std::endl;
		case FLOAT:
			std::cout << static_cast<int>(_literal.Float) << std::endl;
		case DOUBLE:
			std::cout << static_cast<int>(_literal.Double) << std::endl;
		case SPECIALCASE:

		default:
	}
}

void	ScalarConv::convToFloat()
{
	switch (_type)
	{
		case CHAR:
			std::cout << static_cast<float>(_literal.Char) << std::endl; //??
		case INT:
			std::cout << static_cast<float>(_literal.Int) << std::endl; //??
		case FLOAT:
			std::cout << _literal.Float << std::endl;
		case DOUBLE:
			std::cout << static_cast<double>(_literal.Float) << std::endl;
		case SPECIALCASE:
		default:
	}
}

void	ScalarConv::convToDouble()
{
	switch (_type)
	{
		case CHAR:
			std::cout << static_cast<double>(_literal.Char) << std::endl; //??
		case INT:
			std::cout << static_cast<double>(_literal.Int) << std::endl; //??
		case FLOAT:
			std::cout << static_cast<double>(_literal.Float) << std::endl; //??
		case DOUBLE:
			std::cout << _literal.Double << std::endl;
		case SPECIALCASE:

		default:
	}
}

void	ScalarConv::displayConversions()
{
	t_displayList convList[] = {
		{"char : ", &convToChar},
		{"int : ", &convToInt},
		{"float : ", &convToFloat},
		{"double : ", &convToDouble}
	}

	for (int i = 0; i < 4; i++)
	{
		std::cout << convList[i].msg;
		convList[i].fnPtr();
	}
}