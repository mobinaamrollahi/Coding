#include <iostream>
double d; // global memory: static storage

double give_double_return_double(double d);
void static_test();

struct Point
{
	int x; 
	int y;
	Point ()
	{
	x = y = 0;
	}
} global_point; // global object: placed at static storage

int main()
{
	int* ip = new int;
	std::cout << "d is: " << d << '\n';
	double copy_of_d = give_double_return_double(d); // the argument d and copy_of_d
							 // are local variable
	std::cout << "copy of d is: " << copy_of_d << '\n';
	double another_local_double;
	std::cout << "another local vairable is: " << another_local_double << '\n';
	static_test();
	static_test();
	Point p; // local variable and object
	std::cout << p.x << '\t' << p.y << '\n';
	std::cout << global_point.x << '\t' << global_point.y << '\n';
	delete ip; // to do: we will talk about "delete *ip" 
	return 0;
}
double give_double_return_double(double d)
{
	return d;
}
void static_test()
{
	static int i; // treated as the global variable
	int j = 42; // set as 42 everytime we call static_test
	std::cout << "i = " <<i << ", j = " << j << '\n';
	j++;
	i++;
	std::cout << "after increament" << " i = " << i << ", j = " << j << '\n';
}
