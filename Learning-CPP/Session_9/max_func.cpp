#include <iostream>

int max(int /* first number */, int /* second number */);

int main()
{
	int i{42}, j{43};
	auto s = max(i, j);
	std::cout << s << '\n';

	return 0;
}

int max(int x, int y)
{
	return (x > y) ? x : y;
}

