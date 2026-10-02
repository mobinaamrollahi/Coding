#include <iostream>

int main()
{
	using namespace std;
	int n;
	int count = 0;
	int sum = 0;
	while (cin >> n){
		++count;
		sum += n;
	}

	int average = sum/count;
	cout << "Number of inputs: " << count << " and the average is: " << average << '\n'; 
	return 0;
}
