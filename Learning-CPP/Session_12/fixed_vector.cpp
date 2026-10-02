#include <iostream>
#include <vector>
int main(){
	int v[8] = {0, 1, 2, 3, 4, 5, 6, 7};
	std::vector<int> even;
	for(int i : v) {
		if(v[i] %2 == 0 && v[i] != 0) even.push_back(v[i]);
	}
	std::cout << "[";
	for(int j : even) std::cout << j << ", ";
	std::cout << "]";
	return 0;
}
