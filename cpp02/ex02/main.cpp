#include "Fixed.hpp"
#include <iostream>

int main(void) 
{
	{
		std::cout << "\n--- DEFAULT MAIN (pdf) ---\n";
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a;
		std::cout << ++a;
		std::cout << a;
		std::cout << a++;
		std::cout << a;
		std::cout << b;
		std::cout << Fixed::max( a, b );
	}
	{
		std::cout << "\n--- INCREMENTING ---\n";
		Fixed a;
		std::cout << "a = " << a;
		std::cout << "++a = " << ++a;
		std::cout << "a = " << a;
		std::cout << "a++ = " << a++;
		std::cout << "a = " << a;
	}
	{
		std::cout << "\n--- DECREMENTING ---\n";
		Fixed a;
		std::cout << "a = " << a;
		std::cout << "--a = " << --a;
		std::cout << "a = " << a;
		std::cout << "a-- = " << a--;
		std::cout << "a = " << a;

	}
	{
		std::cout << "\n--- ARITHMETIC OPERATIONS ---\n";
		Fixed a(10);
		Fixed b(2.5f);
		std::cout << "--- Addition ---" << std::endl;
		std::cout << "a = " << a;
		std::cout << "b = " << b;
		std::cout << "a + b = " << a + b;
		std::cout << "--- Substraction ---" << std::endl;
		std::cout << "a = " << a;
		std::cout << "b = " << b;
		std::cout << "a - b = " << a - b;
		std::cout << "--- Multiplication ---" << std::endl;
		std::cout << "a = " << a;
		std::cout << "b = " << b;
		std::cout << "a * b = " << a * b;
		std::cout << "--- Division ---" << std::endl;
		std::cout << "a = " << a;
		std::cout << "b = " << b;
		std::cout << "a / b = " << a / b;
	}
	{
		std::cout << "\n--- COMPARING OPERATORS ---\n";
		Fixed a(2);
		Fixed b(4);
		std::cout << "--- Using < ---" << std::endl;
		std::cout << "a = " << a;
		std::cout << "b = " << b;
		if (a < b)
			std::cout << "a < b is true" << std::endl;
		else
			std::cout << "a < b is false" << std::endl;
		std::cout << "--- Using > ---" << std::endl;
		std::cout << "a = " << a;
		std::cout << "b = " << b;
		if (a > b)
			std::cout << "a > b is true" << std::endl;
		else
			std::cout << "a > b is false" << std::endl;
		std::cout << "--- Using <= ---" << std::endl;
		std::cout << "a = " << a;
		std::cout << "b = " << b;
		if (a <= b)
			std::cout << "a <= b is true" << std::endl;
		else
			std::cout << "a <= b is false" << std::endl;
		std::cout << "--- Using >=" << std::endl;
		std::cout << "a = " << a;
		std::cout << "b = " << b;
		if (a >= b)
			std::cout << "a >= b is true" << std::endl;
		else
			std::cout << "a >= b is false" << std::endl;
		std::cout << "--- Using == ---" << std::endl;
		std::cout << "a = " << a;
		std::cout << "b = " << b;
		if (a == b)
			std::cout << "a == b is true" << std::endl;
		else
			std::cout << "a == b is false" << std::endl;
		std::cout << "--- Using != ---" << std::endl;
		std::cout << "a = " << a;
		std::cout << "b = " << b;
		if (a != b)
			std::cout << "a != b is true" << std::endl;
		else
			std::cout << "a != b is false" << std::endl;
	}
	{
		std::cout << "\n--- MIN/MAX FUNCTIONS ---\n";
		Fixed a(10);
		Fixed b(20);
		const Fixed c(15);
		const Fixed d(25);
		std::cout << "a = " << a;
		std::cout << "b = " << b;
		std::cout << "min(a, b) = " << Fixed::min(a,b);
		std::cout << "const c = " << c;
		std::cout << "const d = " << d;
		std::cout << "min(const c, const d) = " << Fixed::min(c,d);
		std::cout << "a = " << a;
		std::cout << "const c = " << c;
		std::cout << "min(a, const c) = " << Fixed::min(a,c);
		std::cout << "a = " << a;
		std::cout << "b = " << b;
		std::cout << "max(a, b) = " << Fixed::max(a,b);
		std::cout << "const c = " << a;
		std::cout << "const d = " << d;
		std::cout << "max(const c, const d) = " << Fixed::max(c,d);
		std::cout << "b = " << b;
		std::cout << "const d = " << d;
		std::cout << "max(b, d) = " << Fixed::max(b,d);
	}
	return 0;
}

/***************************/
/* --- EXPECTED OUTPUT --- */
/***************************/
/*

0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016
$>

*/