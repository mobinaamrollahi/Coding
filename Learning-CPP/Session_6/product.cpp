#include <iostream>

int main()
{
	int i = 1;
	int product = 1;
	while (i < 10){
		product = product*i;
		i += 1;
	}
	std::cout << "Product is: " << product << '\n';
	return 0;
}
