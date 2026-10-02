#include <iostream>
int main()
{
	char v[] = "Hello";
	std::cout << v[0] << '\t' << *v << '\n';
	char *p = v;
	std::cout << v[1] << '\t' << *++p << '\n';
	std::cout << *--p << '\n';
	std::cout << *--p << '\n';
	std::cout << '\"' << "Hello World!" << '\"' << '\n';
	// std::cout << *--p << '\n';
	// for (auto x : v) std::cout << x << '\n';
	return 0;
}
