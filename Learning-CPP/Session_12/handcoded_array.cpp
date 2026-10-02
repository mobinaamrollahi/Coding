#include <iostream>
int main(){
	int x = 4;
	for (int i = 0; i <= 4; ++i)
	{
		std::cout << x << "\n";
		if(i == 0) x += 1;
		else if (i == 1) x += 4;
		else if (i == 2) x += 8;
		else if (i == 3) x -= 5;
	}
	return 0;
}
