#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
public:
	Brain();
	~Brain();
	Brain(const Brain& brain);
	Brain& operator=(const Brain& brain);

	std::string ideas[100];
};

#endif