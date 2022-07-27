#include <iostream>
#include <limits>

// CHECK FOR SPECIAL CHARACTERS:
//	FLOAT : -inff / +inff / nanf
//	DOUBLE : -inf / +inf / nan

// nan/nanf to int : MIN int
// inf to int = MIN int
// nanf to double : nan
// nan to float : nan
// inf to char = impossible
// nan/nanf to char : impossible

//
//			true	INT						true  INT
// isDigits false : is '-'	true -> isDigits
//							false	CHAR	false	->		if only 1 character  CHAR
//													->		if .  -> isDigits		true : DOUBLE
//																					false : if 'f' -> FLOAT

#include <string>
#include "ScalarConv.hpp"



int main(int ac, char *av[])
{
	if (ac == 2)
	{
		std::string convStr = av[1];
		ScalarConv	scalar;

		try 
		{
			scalar.getLiteralType(convStr);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	else
		std::cout << "Wrong number of arguments" << std::endl;
	return (0);
}