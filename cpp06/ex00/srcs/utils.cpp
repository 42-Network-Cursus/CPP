#include <ostream>
#include "ScalarConv.hpp"

// void	display(std::string str, char c)
// {

// }

// void	display(std::string str, int i)
// {
	
// }

// void	display(std::string str, float f)
// {
	
// }

// void	display(std::string str, double d)
// {
	
// }

// void	display(std::string str, string err)
// {
	
// }

bool	is_printable(double nb)
{
	if (nb < 32 || nb > 126)
		return false;
	return true;
}

// std::ostream operator<<(std::ostream os, ScalarConv& s)
// {
// 	display("char : ", s.convToChar());
// 	display("int : ", s.convToInt());
// 	display("float : ", s.convToFloat());
// 	display("double : ", s.convToDouble());
// }