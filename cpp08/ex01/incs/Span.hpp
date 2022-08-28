#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <algorithm>
# include <climits>

class Span
{
	private:
		unsigned int	_maxSize;
		std::vector<int>	_tab;
	public:
		Span();
		Span(unsigned int n);
		~Span();
		Span(const Span & rhs);
		Span& operator=(const Span & rhs);

		void	addNumber(int n);
		void	randomFill();
		int		shortestSpan();
		int		longestSpan();
		void	displayTab();

		class DistanceException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Can't calculate distance");
				}
		};

		class AddNumberException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Can't add more numbers");
				}
		};
};

#endif