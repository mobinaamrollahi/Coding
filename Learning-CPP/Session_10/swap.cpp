#include <iostream>

void swap_val(int, int);

void swap_ptr(int*, int*);

void swap_ref(int&, int&);

int main()
{
	int i = 42;
	int j = 12;

	std::cout << "Before swapping values i is: " << i << " and j is: " << j << '\n';
        swap_val(i, j); // call by value: WRONG!
	std::cout << "After swapping values i is: " << i << " and j is: " << j << '\n';
	
	std::cout << "Before swapping pointers i is: " << i << " and j is: " << j << '\n';
        swap_ptr(&i, &j); // call by reference (C-style)
	std::cout << "After swapping pointers i is: " << i << " and j is: " << j << '\n';
	
	std::cout << "Before swapping references i is: " << i << " and j is: " << j << '\n';
        swap_ref(i, j); // call by reference (C++-style)
	std::cout << "After swapping references i is: " << i << " and j is: " << j << '\n';
	return 0;
}

void swap_val(int x, int y) 
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

void swap_ptr(int* px, int* py) 
{
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
}

void swap_ref(int& x, int& y) 
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}
