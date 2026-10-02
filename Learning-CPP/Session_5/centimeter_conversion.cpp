#include <iostream>
int main()
{
	double cm_per_inch = 2.54;
	double length;
	std::cout << "Enter the length in inches: (0 to exit)\n";
	std::cin >> length;
	if (length > 0){
		std::cout << length << " in = " << cm_per_inch * length << " cm\n";
	}
	return 0;
}
