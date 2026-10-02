#include <iostream>
void mem_allocate(){
	int* p = new int[500'000];
}
int main()
{
	int a[5];
	int* p = new int[5];
	for (int i = 0; i < 5; ++i){
		std::cout << a[i] << '\n';
	}
	for (int i = 0; i < 5; ++i)
		std::cout << p[i] << '\n';
	std::cout << "---------------------------" << '\n';
	for (int i = 0; i < 5; ++i)
		std::cout << *(p+i) << '\n';
	delete [] p;
	/*
	for (int i = 0; i < 10'000'000; ++i)
		mem_allocate();
	*/
	// double* pd = new double[10'000'000];
	return 0;
}
