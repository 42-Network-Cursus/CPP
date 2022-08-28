#include <easyfind.hpp>
#include <list>
#include <vector>
#include <deque>

int main()
{
	{
		int (*f)() = getValue<int>;
		void (*d)(int) = display<int>;
		std::list<int>	tabInt;

		tabInt.resize(5);
		generate(tabInt.begin(), tabInt.end(), f);
		std::cout << "Array contents: \n";
		for_each(tabInt.begin(), tabInt.end(), d);
		std::cout << "\nEasyfind: ";
		try {
			easyfind(tabInt, 5);
		}
		catch (NotFoundException & e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		int (*f)() = getValue<int>;
		void (*d)(int) = display<int>;
		std::vector<int>	tabInt;

		tabInt.resize(5);
		generate(tabInt.begin(), tabInt.end(), f);
		std::cout << "Array contents: \n";
		for_each(tabInt.begin(), tabInt.end(), d);
		std::cout << "\nEasyfind: ";
		try {
			easyfind(tabInt, 8);
		}
		catch (NotFoundException & e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		int (*f)() = getValue<int>;
		void (*d)(int) = display<int>;
		std::deque<int>	tabInt;

		tabInt.resize(5);
		generate(tabInt.begin(), tabInt.end(), f);
		std::cout << "Array contents: \n";
		for_each(tabInt.begin(), tabInt.end(), d);
		std::cout << "\nEasyfind: ";
		try {
			easyfind(tabInt, 8);
		}
		catch (NotFoundException & e) {
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}