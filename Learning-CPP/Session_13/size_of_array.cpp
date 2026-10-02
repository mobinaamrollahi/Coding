#include <iostream>

int main()
{
	int a[0];
	int b[100][0];

	std::cout << "The size of a " << sizeof(a[0]) << '\n';
	std::cout << sizeof(int) << '\n';
	return 0;
}

