#include <stdint.h>
#include <iostream>

struct Data {
	int nb;
	char c;
	float flt;
};

uintptr_t serialize(Data* ptr)
{
	std::cout << "Serializing Data\n";
	uintptr_t ret = reinterpret_cast<uintptr_t>(ptr);
	std::cout << "uintptr_t value : " << ret << std::endl;
	return (ret);
}

Data* deserialize(uintptr_t raw)
{
	std::cout << "Deserializing Data\n";
	return (reinterpret_cast<Data*>(raw));
}

std::ostream&	operator<<(std::ostream& os, Data myData)
{
	os << myData.nb << std::endl;
	os << myData.c << std::endl;
	os << myData.flt << std::endl;
	return (os);
} 

int main()
{
	Data myData;

	myData.nb = 5;
	myData.c = 'H';
	myData.flt = 10.15;
	std::cout << myData;

	deserialize(serialize(&myData));

	std::cout << myData;
	return (0);
}

