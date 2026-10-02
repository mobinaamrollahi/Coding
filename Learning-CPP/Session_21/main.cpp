#include "point.h"
#include <iostream>
struct c_point{
	int x; 
	int y;
	char dummy;
};
Point point_func(int x, int y = 1001){
	Point my_point(x, y);
	return my_point;
}
int main(){
	const int i = 100;
	const Point center;
	std::cout << center.get_x() << '\n';
	std::cout << center.get_x() << '\n';
	auto p = point_func(43, 65);
	p.move(4, 3);
	std::cout << "P = (" << p.get_x() << "," << p.get_y() << ")" << '\n';
	/// std::cout << center.x_ << '\n';
	std::cout << sizeof(c_point) << '\t' <<sizeof(Point) << '\n';
	return 0;
}
