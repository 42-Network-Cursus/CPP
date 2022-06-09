#include "Harl.hpp"

int	main()
{
	Harl Jeff;

	std::cout << "---Random words---" << std::endl;
	Jeff.complain("Random");
	std::cout << "---Debug level---" << std::endl;
	Jeff.complain("debug");
	std::cout << "---Info level---" << std::endl;
	Jeff.complain("info");
	std::cout << "---Warning level---" << std::endl;
	Jeff.complain("warning");
	std::cout << "---Error level---" << std::endl;
	Jeff.complain("error");
}