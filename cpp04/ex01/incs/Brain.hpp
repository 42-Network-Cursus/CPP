#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

# define NB_OF_IDEAS 100

class Brain
{
private:
	std::string _ideas[NB_OF_IDEAS];
public:
	Brain();
	~Brain();
	Brain(const Brain& brain);
	Brain& operator=(const Brain& brain);

	std::string	getIdea(int idx);
};

#endif