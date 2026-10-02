#include <iostream>

// int* find(int [], int /* size */, int /* search key */);

int* find(int arr[], int size, int v)
{
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == v) return &arr[i];
	}
	std::cout << v << " not found. \n";
	return &arr[size];
}

int main()
{
	int arr[6] = {-42, 0, 2, 10, 101, -1};
	int j{0};
	std::cout << "Please enter a number for search: \n";
	std::cin >> j;
	auto p = find(arr, 6, j);
	std::cout << "The number is at: " << *p << '\n';
	return 0;
}

