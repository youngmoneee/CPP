#ifndef CPP_POINT_HPP
#define CPP_POINT_HPP

#include "Point.hpp"
#include "Fixed.hpp"

class Point
{
private:
	const Fixed x;
	const Fixed y;
public:
	Point();
	Point(const Point& ref);
	Point(const float x, const float y);
	~Point();

	Point& operator=(const Point& ref);
	Fixed getX(void) const ;
	Fixed getY(void) const ;
	Fixed area(Point const other, Point const another) const ;
};

std::ostream& operator<<(std::ostream& os, const Point ref);
bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif
