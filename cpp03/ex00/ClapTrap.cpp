ClapTrap::ClapTrap()
{
	if (_announceConstruct)
		std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name)
{
	if (_announceConstruct)
		std::cout << "Constructor(_name) called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	if (_announceConstruct)
		std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	if (_announceConstruct)
		std::cout << "Deconstructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
	if (_announceConstruct)
		std::cout << "Assignment operator called" << std::endl;
	//copy stuff this->_var = var from given param
	return (*this);
}