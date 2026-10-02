#include <iostream>
#include <string> 
using std::cout; using std::cin;
using std::string;
int main()
{
	cout << "Please enter your first name: ";
	string name; 
	cin >> name; 
	cout << "Hello, " <<name << "!" << '\n';
	return 0;
}
