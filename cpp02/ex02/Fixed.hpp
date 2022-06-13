#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_fixedNumber;
	const static int	_bits = 8;
	bool				_msg = false; // Set to True for Construct && deconstruct msg
public:
	Fixed(void); //Default constructor
	Fixed(const Fixed& copy); //Copy constructor
	~Fixed(void); //Deconstructor
	Fixed&	operator =(const Fixed& fixed); //Overloaded assignment operator

	Fixed(const int intNumber);
	Fixed(const float floatNumber); 

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

	bool operator >(const Fixed& fixed) const;
	bool operator <(const Fixed& fixed) const;
	bool operator >=(const Fixed& fixed) const;
	bool operator <=(const Fixed& fixed) const;
	bool operator ==(const Fixed& fixed) const;
	bool operator !=(const Fixed& fixed) const;

	Fixed operator +(const Fixed& fixed);
	Fixed operator -(const Fixed& fixed);
	Fixed operator *(const Fixed& fixed);
	Fixed operator /(const Fixed& fixed);

	Fixed& operator ++(void); //prefix
	Fixed operator ++(int zero); //postfix
	Fixed& operator --(void); //prefix
	Fixed operator --(int zero); //postfix

	static Fixed		min(Fixed& a, Fixed& b);
	static const Fixed	min(const Fixed& a, const Fixed& b);
	static Fixed		max(Fixed& a, Fixed& b);
	static const Fixed	max(const Fixed& a, const Fixed& b);
};

std::ostream&	operator <<(std::ostream& oStream, Fixed const& valueToPrint);
int	myPow(int base, int power);

#endif