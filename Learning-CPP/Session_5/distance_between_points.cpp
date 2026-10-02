#include <iostream>
#include <cmath>

int main()
{
	double x1, y1;
	std::cout << "Enter the coordinates of first point:  \n";
	std::cin >> x1 >> y1;

	double x2, y2;
	std::cout << "Enter the coordinates of the second point: \n";
	std::cin >> x2 >> y2;

	double dist = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	std::cout << "The distance is " << dist << '\n';
	return 0;
}
