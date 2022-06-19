#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int bits;
	static const int fraction = { 8 };
public:
	Fixed();
	Fixed(const int para);
	Fixed(const float para);
	Fixed(const Fixed& ref);

	~Fixed();

public:
	Fixed& operator= (const Fixed& ref);
	int getRawBits( void ) const ;
	void setRawBits( int const bits);
	int toInt( void ) const ;
	float toFloat( void ) const ;

	static Fixed& max(Fixed& a, Fixed& b);
	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);

	Fixed& operator++(void);
	Fixed operator++(int);
	Fixed& operator--(void);
	Fixed operator--(int);
	bool operator<(const Fixed& ref) const ;
	bool operator>(const Fixed& ref) const ;
	bool operator<=(const Fixed& ref) const ;
	bool operator>=(const Fixed& ref) const ;
	bool operator==(const Fixed& ref) const ;
	bool operator!=(const Fixed& ref) const ;
	Fixed operator+(const Fixed& ref) const ;
	Fixed operator-(const Fixed& ref) const ;
	Fixed operator*(const Fixed& ref) const ;
	Fixed operator/(const Fixed& ref) const ;
};

std::ostream& operator<< (std::ostream& os, const Fixed& ref);

#endif