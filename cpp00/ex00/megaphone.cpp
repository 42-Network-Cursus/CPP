#include <iostream>
#include <cstring>

int	main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
			for (size_t x = 0; x < strlen(argv[i]); x++)
				putchar(toupper(argv[i][x]));
		std::cout << std::endl;
	}
	return (0);
}