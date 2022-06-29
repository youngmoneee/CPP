#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int bits;
	static const int fraction = 8;
public:
	Fixed();
	Fixed(const Fixed& ref);

	~Fixed();

	Fixed& operator= (const Fixed& ref);
	int getRawBits( void ) const ;
	void setRawBits( int const bits);
};

#endif
