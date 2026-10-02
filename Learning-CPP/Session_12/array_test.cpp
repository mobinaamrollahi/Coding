#include <iostream>
bool a[3] = {false, true};
int main()
{
	const int size = 42;
	double v[size];
	int arr[10];
	std::cout << "The third element of a is: " << a[2] << '\n';
	for (int i = 0; i < 10; ++i) arr[i] = i;
	for (int i = 0; i < 10; ++i) std::cout << i << '\n';
	int* p;
	p = &arr[0];
	std::cout << *p << '\n';
	p++;
	std::cout << *p << '\n';
	int x = arr[9];
	std::cout << x << '\n';
	std::cout << arr[9] << '\n';
	return 0;
}

