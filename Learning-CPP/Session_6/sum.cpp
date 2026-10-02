#include <iostream>
int main()
{
	std::cout << "Enter an integer number (0 for exit): ";
	int n;
	std::cin >> n;

	if (!n) return 0;

	int sum1 = 0;
	for (int i = 1; i <=n; i++) sum1 += i;

	int sum2 = n * (n + 1) / 2;
	std::cout << "sum with first method = " << sum1 << '\n';
	std::cout << "sum with second method = " << sum2 << '\n';

	return 0;
}
