#include <vector>
#include <iostream>

int main()
{
	std::vector<double> v;
	double a[0];
	if (v.size() != 0)
		std::cout << "Something wrong happened! \n";
	v.push_back(-42.1);
	std::cout << v[0] << '\n';
	std::cout << v.size() << '\n';
	if (v.empty())
		std::cout << "Something wrong happened! \n";
	return 0;
}
