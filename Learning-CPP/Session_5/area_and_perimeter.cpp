#include <iostream>
int main()
{
	double Pi = 3.14;
	std::cout << "Please enter the radius: (0 for exit) \n";
	double r = 0;
	std::cin >> r;
	double area = Pi * r * r;
	double peri = 2 * Pi * r;
	if (r != 0){
		std::cout << "Area = " << area << '\n';
		std::cout << "Perimeter = " << peri << '\n';
	}

	return 0;
}
