#include <iostream>
int main()
{
	int i = 1;
	int* p = &i;
	int j;
	std::cout << p << '\t' << &i << '\t' << &j << '\n';
	
	return 0;
}

