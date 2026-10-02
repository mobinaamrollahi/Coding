#include <iostream>

void incr(int& x);

int incr2(int x);

int main(){
	
	int x = 42;
	incr(x);
	std::cout << x << '\n';
	int y = incr2(x);
	std::cout << y << '\n';
	return 0;
}

void incr(int& x){
	++x;
}

int incr2(int x){
	++x;
	return x;
}
