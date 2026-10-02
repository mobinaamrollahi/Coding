#include <iostream>
void sort_three(int /* 1st int */, int /* 2nd int */, int /* 3rd int*/);

int main()
{
	int first, second, third;
	std::cout << "Enter the three numbers: \n";
	std::cin >> first >> second >> third;
	std::cout << first << "," << second << "," << third << '\n';
	sort_three(first, second, third);
	return 0;
}

void sort_three(int first, int second, int third)
{
	if (first <= second)
	{
		if (first <= third)
		{
			if (second <= third) std::cout << first << "," << second << "," << third << '\n';
			else std::cout << first << "," << third << "," << second << '\n';				
		}
		else std::cout << third << "," << first << "," << second << '\n';
	}
	else
	{
		if (first <= third) std::cout << second << "," << first << "," << third << '\n';
		else
		{
			if (second <= third) std::cout << second << "," << third << "," << first << '\n';
			else std::cout << third << "," << second << "," << first << '\n';
		}
	}
}
