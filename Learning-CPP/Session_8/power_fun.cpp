#include <iostream>
#include <cmath>
long long power(int /* base */, int /* exp */);

int main()
{
	int base, exp;
	std::cout << "Enter the base: \n";
	std::cin >> base;
	std::cout << "Enter the exponent: \n";
	std::cin >> exp;
	long long result = power(base, exp);
	std::cout << "The result is: " << result << '\n';
	return 0;
}

long long power(int base, int exp)
{
	return pow(base, exp);
}
