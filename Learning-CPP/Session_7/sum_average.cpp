#include <iostream>
int main()
{
	int number;
	int sum = 0;
	int count = 0;

	while (std::cin >> number) {
		sum += number;
		++count;
	}

	int average = sum / count;
	std::cout << "The total numbers are: " << count << '\n';
	std::cout << "The sum is: " << sum << '\n';
	std::cout << "The average is: " << average << '\n';
	return 0;
}
