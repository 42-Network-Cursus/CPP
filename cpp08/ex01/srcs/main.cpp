#include <Span.hpp>

int main()
{
	srand (time(NULL));
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span sp = Span(10);

		sp.randomFill();
		sp.displayTab();
	}
	{
		Span sp = Span(10000);

		sp.randomFill();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	{
		Span sp = Span(1);

		sp.addNumber(6);
		try {
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (Span::DistanceException &e) {
			std::cout << e.what() << std::endl;
		}
	}	
	{
		Span sp = Span(1);

		sp.addNumber(6);
		try {
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (Span::DistanceException &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		Span sp = Span(2);

		try {
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
		}
		catch (Span::AddNumberException &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}

// EXPECTED OUTPUT
// /ex01
// 2
// 14
//