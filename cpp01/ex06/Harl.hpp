#ifndef HARL
# define HARL

# include <string>
# include <iostream>
# include <map>

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	Harl(void);
	~Harl(void);

	void	complain(std::string level);
};

#endif