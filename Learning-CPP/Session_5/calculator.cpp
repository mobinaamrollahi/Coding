#include <iostream>
#include <set>
#include <string>
int main()
{
	std::set<char> viable_operations = {'+', '-', '/', '*', '%'};

	std::string oper; //The user might provide other than a charcter
	std::cout << "Enter the arithmetic operation: \n";
	std::cin >> oper;

	if (oper.length() != 1 || viable_operations.find(oper[0]) == viable_operations.end()) {
		std::cout << "The arithmetice operation is not valid. \n";
		return 1;
	}
	
	char op = oper[0];
	long x, y;
	std::cout << "Enter two numbers: \n";
	std::cin >> x >> y;
	
	long result;
	if (op  == '+') result = x + y;
	else if (op == '-') result = x - y;
	else if (op == '*') result = x * y;
	else if (op == '/') {
		if (y == 0) {
			std::cout << "Division by zero! \n";
			return 1;
		}
		result = x / y;
	}
	else if (op == '%') result = x % y;
	std::cout << x << ' ' << op << ' ' << y << " = " << result << '\n';
	return 0;

}
