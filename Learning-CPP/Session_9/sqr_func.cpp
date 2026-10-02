#include <iostream>

long int sqr(int);

int main()
{
	auto pi2 = sqr(3.14);
	std::cout << pi2 << '\n';	
	std::cout << " x = ";
	int x;
	std::cin >> x;
	auto s = sqr(x);
	std::cout << "The square of " << x << " is: " << s << '\n';
	return 0;
}

long int sqr(int x){
	return x * x;
}

