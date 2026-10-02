#include <iostream>
class Point { // 2D points
	int x_{0}, y_{0};
public:
	Point(int x = 0, int y = 0) : x_{x}, y_{y} 
	{
		std::cout << "calling ctor... \n";
	}
	~Point() 
	{
		std::cout << "calling dtor...\n";
	}
};	

int main()
{
	Point center;
	Point* p = new Point{-42, 42};
	// manipulate p
	// ...
	// 1'000 lines later
	delete p;
	return 0;
}
