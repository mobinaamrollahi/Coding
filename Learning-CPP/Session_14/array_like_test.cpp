#include <vector>
#include <array>
#include <iostream>

int main()
{
	std::vector<int> v;
	double arr[3] = {0.0, 3.14, 2.71};
	std::array<int, 3> a;
	std::cout << "The size of vector is: " << v.size() << '\t'
		  << "The size of cpp-array is: " << a.size() << '\n';
	std::cout << sizeof(arr)/sizeof(double) << '\n';
	std::cout << sizeof(v) << '\n';
	v.push_back(42);
	/// a.push_back(42);
	v.resize(10);
	// for (int i = 0; i < v.size(); ++i) std::cout << v[i] << '\n';
	// for (int i = 0; i < a.size(); ++i) std::cout << a[i] << '\n';
	for (auto x : v) std::cout << x << '\n';
	for (auto x : a) std::cout << x << '\n';
	for (auto x : arr) std::cout << x << '\n';
	return 0;
}
