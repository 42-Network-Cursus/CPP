#include <iostream>
#include <string>
#include <fstream>

// Usage: ./a.out <filename> <string1> <string2>
// Creates a new file <filename>.replace that replaces all string1 occurences by string2

static void	replaceString(std::string& line, std::string s1, std::string s2)
{
	size_t	pos = 0;

	while (1)
	{
		pos = line.find(s1, pos);
		if (pos == -1)
			break ;
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos += s2.length();
	}
}

static int	error(std::string msg)
{
	std::cout << msg << std::endl;
	return (1);
}

int main(int ac, char **av)
{
	if (ac != 4)
		return (error("Wrong number of parameters given."));
	
	std::ifstream 	inFile;
	std::ofstream 	outFile;
	std::string		filename(av[1]);
	std::string		line;

	inFile.open(av[1], std::ifstream::in);
	if (!inFile.is_open())
		return (error("Can't open given file."));
	outFile.open(filename.append(".replace"));

	while (std::getline(inFile, line))
	{
		replaceString(line, av[2], av[3]);
		outFile << line;
		if (!inFile.eof())
			outFile << std::endl;
	}
	inFile.close();
	outFile.close();
	return (0);
}