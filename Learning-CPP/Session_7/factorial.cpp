#include <iostream>
int main()
{
	// std::cout << sizeof (long long) << '\n';
	std::cout << "Enter an integer number: (-1 for exit) ";
	int n;
	std::cin >> n;
	if (n == -1) return 1;
	
	if (n < -1){
	std::cout << "Error: Negative Number." << '\n';
	return 1;
	}

	if (n == 0){
	std::cout << n << "! = " << 1 << '\n';
	return 0;	
	}

	long double fact = 1;
	for (int i = n; i > 0; --i) fact *= i;

	std::cout << n << "! = " << fact << '\n';

	return 0;
}
