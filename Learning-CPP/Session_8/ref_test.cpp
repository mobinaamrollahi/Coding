#include <iostream>
int main(){
	int i = 42;
	int& ir = i;
	std::cout << ir << '\t' << i << '\n';
	ir++;
	std::cout << ir << '\t' << i << '\n';
	i += 10;
	std::cout << ir << '\t' << i << '\n';
	int j = i;
	j--;
	std::cout << ir << '\t' << i << '\t' << j << '\n';
	ir = j;
	std::cout << ir << '\t' << i << '\t' << j << '\n';
	return 0;
}
