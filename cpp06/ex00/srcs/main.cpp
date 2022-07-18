#include <iostream>
#include <limits>

int main(int ac, char *av[])
{
	// if (ac != 2)
	// {
	// 	std::cout << "Wrong number of parameters" << std::endl;
	// 	return (0);
	// }
	// TypeConverter	s(av[1]);
	(void)av;
	(void)ac;
	// float t = -inff;
	// std::cout << t << std::endl;
	char i = std::numeric_limits<float>::infinity();
	 std::cout << "float has infinity: " << i << '\n';
	// std::cout << s << std::endl;
	return (0);
}