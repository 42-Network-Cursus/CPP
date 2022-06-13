#include "Fixed.hpp"

/**************************/
/* INCREMENT && DECREMENT */
/**************************/

Fixed& Fixed::operator ++(void) //prefix
{
	this->_fixedNumber++;
	return (*this);
}

Fixed Fixed::operator ++(int zero) //postfix
{
	Fixed old(*this);
	operator ++();
	return (old);
}

Fixed& Fixed::operator --(void) //prefix
{
	this->_fixedNumber--;
	return (*this);
}

Fixed Fixed::operator --(int zero) //postfix
{
	Fixed old(*this);
	operator --();
	return (old);
}

/*************************/
/* ARITHMETIC OPERATIONS */
/*************************/

Fixed Fixed::operator +(const Fixed& fixed)
{
	Fixed ret;
	ret.setRawBits(this->_fixedNumber + fixed.getRawBits());
	return (ret);

}

Fixed Fixed::operator -(const Fixed& fixed)
{
	Fixed ret;
	ret.setRawBits(this->_fixedNumber - fixed.getRawBits());
	return (ret);
}

//WIP
Fixed Fixed::operator *(const Fixed& fixed)
{
	Fixed ret(this->toFloat() * fixed.toFloat());
	return (ret);
}

//WIP
Fixed Fixed::operator /(const Fixed& fixed)
{
	Fixed ret(this->toFloat() / fixed.toFloat());
	return (ret);
}

/************************/
/* COMPARING OPERATIONS */
/************************/

bool Fixed::operator >(const Fixed& fixed) const
{
	if (this->_fixedNumber > fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator <(const Fixed& fixed) const
{
	if (this->_fixedNumber < fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator >=(const Fixed& fixed) const
{
	if (this->_fixedNumber >= fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator <=(const Fixed& fixed) const
{
	if (this->_fixedNumber <= fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator ==(const Fixed& fixed) const
{
	if (this->_fixedNumber == fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator !=(const Fixed& fixed) const
{
	if (this->_fixedNumber != fixed.getRawBits())
		return (true);
	return (false);
}
