#include <iostream>
#include <vector>

int main()
{
	std::vector<int> even;
	std::vector<int> odd;
	int number;

	while(std::cin >> number)
	{
		if(number % 2 == 0) even.push_back(number); 
		else odd.push_back(number);
	}
	
	std::cout << "The even vector is: ";
	for(auto element : even) std::cout << element << " "; 
	std::cout << '\n';

	std::cout << "The odd vector is: ";
	for(int element : odd) std::cout << element << " ";  
	std::cout << '\n';
	
	return 0;
}
