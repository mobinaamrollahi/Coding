#include <iostream>
#include <array>

int main()
{
	std::array<double, 10> number;
	
	int x;
	int i{ 0 };
	while (std::cin >> x && i < 10) {
		number[i] = x;
		++i;
	}

	for (int i = 0; i < number.size(); ++i)
		std::cout << number[i] << '\n';

	
	return 0;
}