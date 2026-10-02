#include <iostream>
int main()
{
	long double a, b;
	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;
	if (b == 0.0) {
	       	std::cout << "Division by zero! \n";
		return 1;
	}
	else {
		std::cout << a << "/" << b << " is " << a/b << '\n';
	}
	return 0;
}

