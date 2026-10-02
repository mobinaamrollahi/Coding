#include <iostream>
int main()
{
	const double cm_per_inch{2.54};
	int length{1};
	while (length != 0){
		std::cout << "The length in inches: (0 for exit) \n";
		std::cin >> length;
		std::cout << length << " in. = " << length*cm_per_inch << " cm \n";
	}
	return 0;
}
