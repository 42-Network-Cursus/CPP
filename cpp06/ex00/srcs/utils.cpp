#include <ostream>

std::ostream operator<<(std::ostream os, TypeConverter& s)
{
	display("char : ", s.convToChar());
	display("int : ", s.convToInt());
	display("float : ", s.convToFloat());
	display("double : ", s.convToDouble());
}