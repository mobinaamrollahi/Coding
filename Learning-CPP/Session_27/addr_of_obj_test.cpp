#include <iostream>
class Point { // 2D points
	int x_{0}, y_{0};
public:
	Point(int x = 0, int y = 0) : x_{x}, y_{y} 
	{
	}
	const Point* identity() const
	{
		return this;
	}
	int get_x()
	{
		return x_; // actually return this -> x
	}
	int get_y()
	{
		return this->y_; // rather verbose, this is redundant!
	}
};
int main()
{
	Point center;
	Point p = Point{-42, 42};
	std::cout << &center << '\t' << &p << '\n';
	std::cout << center.identity() << '\t' << p.identity() << '\n';
	return 0;
}
