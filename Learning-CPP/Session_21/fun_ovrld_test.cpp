#include <iostream>
inline void print(int x = -1){
	std::cout << "Print integer: ";
	std::cout << x << '\n';
}
inline void print(double y){
	std::cout << "Print double: ";
	std::cout << y << '\n';
}

int main(){
	print(42);
	print();
	print(9.8);	
	return 0;
}


