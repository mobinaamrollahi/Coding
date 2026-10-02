#include <iostream>
struct Point {
	int x, y;
};

Point make_point(int, int);

int main()
{
	auto p = make_point(1, 2);
	auto pp = &p;
	std::cout << "(" << pp->x << "," << pp->y << ")" << '\n';
	return 0;
}

Point make_point(int x, int y)
{
	Point p = {x, y};
	return p;
}
