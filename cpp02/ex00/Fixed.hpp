#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					_fixedNumber;
	const static int	_bits = 8;
public:
	Fixed(void); //Default constructor
	Fixed(const Fixed& copy); //Copy constructor
	~Fixed(void); //Deconstructor
	Fixed&	operator= (const Fixed& fixed); //Overloaded assignment operator

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif