#include <iostream>
#include <array>
#include <vector>

void print_c_style_array1(const int a[], int size) // doesn't work
{
	std::cout << "C-Style array ...\n";
	for (auto elem : a)
		std::cout << a[i] << '\n';
}

void print_c_style_array2(const int(&a)[1], int size) // doesn't work
{
	std::cout << "C-Style array ...\n";
	for (auto elem : a)
		std::cout << elem << '\n';
}

void print_c_style_array3(int a[], int size)
{
	std::cout << "C-Style array ...\n";
	for (int i = 0; i < size; ++i)
		std::cout << a[i] << '\n';
}

void print_standard_array(const std::array<int, 5>& sa)
{
	std::cout << "standard array ...\n";
	for (const auto& elem : sa)
		std::cout << elem << '\n';
}

void print_zero_sized_standard_array(const std::array<int, 0>& zsa)
{
	std::cout << "zero-sized standard array ...\n";
	for (const auto& elem : zsa)
		std::cout << elem << '\n';
}

void print_vector(const std::vector<int>& v)
{
	std::cout << "vector ...\n";
	for (const auto& elem : v)
		std::cout << elem << '\n';
}

int main()
{
	// declaration and definition
	int a[] = { 0 };
	std::array<int, 5> sa = { 0 };
	std::vector<int> v = { 0 };
	// the size	
	std::cout << "C-Style array size: " << sizeof(a) / sizeof(int) << '\n';
	std::cout << "Standard array size: " << sa.size() << '\n';
	std::cout << "Vector size: " << v.size() << '\n';
	std::cout << "Vector capacity: " << v.capacity() << '\n';
	// the contents
	print_c_style_array2(a, 1);
	print_standard_array(sa);
	print_vector(v);

	// zero-size test
//	int z[0]; // error: zero size array
	std::array<int, 0> za; // zero size
	std::vector<int> zv; // zero size
	zv.push_back(1);
	zv.push_back(20);
	zv.push_back(-3);
	print_zero_sized_standard_array(za);
	print_vector(zv);

	return 0;
}