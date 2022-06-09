#include "Harl.hpp"

Harl::Harl(void)
{

}

Harl::~Harl(void)
{

}

void	Harl::debug(void)
{
	std::cout << "DEBUG" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO" << std::endl;
}

void	Harl::warning(void)
{
	std::cout <<  "WARNING" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR" << std::endl;
}

void	Harl::complain(std::string level)
{
	enum elvl
	{
		DEBUG = 1,
		INFO,
		WARNING,
		ERROR
	};

	std::map<std::string, elvl> levels;
	
	levels["debug"] = DEBUG;
	levels["info"] = INFO;
	levels["warning"] = WARNING;
	levels["error"] = ERROR;

	switch (levels[level])
	{
		case DEBUG:
			this->debug();
		case INFO:
			this->info();
		case WARNING:
			this->warning();
		case ERROR:
			this->error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}