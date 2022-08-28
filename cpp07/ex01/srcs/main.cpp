#include <Iter.hpp>
#include <iostream>

int main()
{
	int		intArray[5] = { 1, 2, 3, 4, 5};
	int *	intPtr = intArray;
	void (*fInt)(int &) = increment;
	iter(intPtr, 5, fInt);
	
	for (int i = 0; i < 5; i++)
		std::cout << intArray[i] << std::endl;

	float		floatArray[5] = { 1.5, 2.5, 3.5, 4.5, 5.5};
	float *		floatPtr = floatArray;
	void (*fFloat)(float &) = increment;
	iter(floatPtr, 5, fFloat);
	
	for (int i = 0; i < 5; i++)
		std::cout << floatArray[i] << std::endl;

	char	charArray[5] = { 'a', 'b', 'c', 'd', 'e'};
	char *	charPtr = charArray;
	void (*fchar)(char &) = increment;
	iter(charPtr, 5, fchar);
	
	for (int i = 0; i < 5; i++)
		std::cout << charArray[i] << std::endl;

	return (0);
}