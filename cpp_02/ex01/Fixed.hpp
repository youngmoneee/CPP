#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int bits;
	static const int fraction = 8;
public:
	Fixed();
	Fixed(const int para);
	Fixed(const float para);
	Fixed(const Fixed& ref);

	~Fixed();

	Fixed& operator= (const Fixed& ref);
	int getRawBits( void ) const ;
	void setRawBits( int const bits);
	int toInt( void ) const ;
	float toFloat( void ) const ;
};

std::ostream& operator<< (std::ostream& os, const Fixed& ref);

#endif
