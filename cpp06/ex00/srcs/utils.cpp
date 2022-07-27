#include <ostream>
#include "ScalarConv.hpp"

std::ostream operator<<(std::ostream os, ScalarConv& s)
{
	display("char : ", s.convToChar());
	display("int : ", s.convToInt());
	display("float : ", s.convToFloat());
	display("double : ", s.convToDouble());
}