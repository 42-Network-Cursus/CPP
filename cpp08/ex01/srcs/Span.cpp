#include <Span.hpp>

Span::Span() : _maxSize(0)
{
	std::cout << "Default span constructor\n";
}

Span::Span(unsigned int n) : _maxSize(n)
{
	std::cout << "Param span constructor\n";
}

Span::~Span()
{
	std::cout << "Span destructor\n";
}

Span::Span(const Span & rhs)
{
	std::cout << "Span copy constructor\n";
	*this = rhs;
}

Span& Span::operator=(const Span & rhs)
{
	std::cout << "Span assignment operator\n";
	if (this != &rhs)
	{
		_maxSize = rhs._maxSize;
		_tab = rhs._tab;
	}
	return (*this);
}

void			Span::addNumber(int n)
{
	if (_tab.size() < _maxSize)
		_tab.push_back(n);
	else
		throw AddNumberException();
}

int			generateRandomNumber()
{
	return (std::rand() % 100);
}

void			Span::randomFill()
{
	int	(*f)() = generateRandomNumber;

	_tab.resize(_maxSize);
	generate(_tab.begin(), _tab.end(), f);
}

int	Span::shortestSpan()
{
	long				ret = std::numeric_limits<long>::max();
	std::vector<int>	tmp;

	if (_tab.size() < 2)
		throw DistanceException();
	tmp = _tab;
	sort(tmp.begin(), tmp.end());
	for (unsigned int i = 0; i + 1 < _maxSize ; i++)
		ret = (std::min(ret, static_cast<long>((tmp[i + 1] - tmp[i]))));
	return (ret);
}

int	Span::longestSpan()
{
	std::vector<int> tmp;

	if (_tab.size() < 2)
		throw DistanceException();
	tmp = _tab;
	sort(tmp.begin(), tmp.end());
	return (tmp.back() - tmp.front());
}

void	display(int n)
{
	std::cout << n << ", ";
}

void			Span::displayTab()
{
	void (*d)(int) = display;
	for_each(_tab.begin(), _tab.end(), d);
	std::cout << std::endl;
}
