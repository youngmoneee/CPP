#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed ret1 = a.area(b, c);
	Fixed ret2(a.area(b, point) + a.area(c, point));
	if (ret1 > ret2) return true;
	return false;
}