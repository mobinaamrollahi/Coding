#include <iostream>
int main(){
	char c = 'Y';
	char *p = &c;
	char c2 = *p;
        //int* ip; // = 0;
	std::cout << p << '\t' << c << '\n';
	// std::cout << p << '\t' << &c << '\n';
	std::cout << c2 << '\n';
	(*p)++;
	std::cout << *p << '\t' << c << '\n';
	//std::cout << *ip << '\n';
	return 0;
}
