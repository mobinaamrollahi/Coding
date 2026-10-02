#include <iostream>
class Fred {
public:
	Fred(int i = 3, int j = 5) {
	std::cout << "Calling Fred::defualt ctor \n";
	std::cout << i << ", " << j << '\n';
	};
};

int main() {
	Fred fred;
	Fred jasmine(42);
	Fred parsa(42,-100);
	return 0;
}
