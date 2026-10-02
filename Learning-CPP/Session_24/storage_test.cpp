#include <iostream>
int i; // global variable, initialized to zero

int main()
{
	int i; // local variable, default init: un-init 
	{
		int i{42}; // point of declaration, 
			   // this i hides enclosing i until the end of the scope
		std::cout << i << '\n';
		double e = 2.7182;
		double* ep = &e;
		double* dp = new double{3.14}; // new returns a pointer to the 3.14
		/*
		 do and manipulate a lot of code about d
		 */
		std::cout << *dp << '\n';
		(*dp)++;
		std::cout << "after incrementing: " << *dp << '\n';
		std::cout << "where dp is: " << dp << '\n';
		double* dp2 = dp + 1;
		std::cout << "where dp2 is: " << dp2 << '\n';
		std::cout << *dp2 << '\n';
		delete ep;
		delete dp;
	} // at this point, compiler automatically destroies i{42} 	
	std::cout << i << '\n'; // the enclosing i now is visible
	std::cout << "global i is: " << ::i << '\n'; //looking for i in the global scope
	return 0;
}
