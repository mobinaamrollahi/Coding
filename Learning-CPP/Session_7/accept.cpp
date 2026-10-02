#include <iostream>
int main()
{
	std::cout << "Do you want to proceed (y or n): ";
	char answer = 0;
	std::cin >> answer;
	bool result{false};
	switch (answer) {
	case 'y': case 'Y': 
		result = true;
		//break;

	case 'n': case 'N':
		result = false;
		//break;

	default:
		result = false;
	}

	std::cout << std::boolalpha << "Result is " << result << '\n';
	return 0;
}
