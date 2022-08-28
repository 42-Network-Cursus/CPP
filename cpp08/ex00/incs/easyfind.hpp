#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

class NotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Value not found");
		}
};

template<typename T> 
void	easyfind(T & data, int n)
{
	if (std::find(data.begin(), data.end(), n) == data.end())
		throw NotFoundException();
	std::cout << *std::find(data.begin(), data.end(), n) << std::endl;
}

template<typename T>
T	getValue()
{
	static	T	val = 0;
	val++;
	return (val);
}

template<typename T>
void	display(T data)
{
	std::cout << data << ", ";
}

#endif