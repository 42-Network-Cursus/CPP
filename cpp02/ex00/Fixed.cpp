#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedNumber(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) : _fixedNumber(copy._fixedNumber)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Deconstructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fixedNumber = fixed._fixedNumber;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_fixedNumber);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedNumber = raw;
}