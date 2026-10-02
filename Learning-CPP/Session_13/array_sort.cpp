#include <algorithm>
#include <iostream>

int main()
{
	int arr[5] = {0, -1, 1, 9, 5};
	std::sort(arr, arr + 5);
	for (int i = 0; i < 5; ++i)
	{
		std::cout << arr[i] << '\n';
	}
	return 0;
}

