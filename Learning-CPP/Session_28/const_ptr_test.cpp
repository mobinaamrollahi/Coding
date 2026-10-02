# include <iostream>
int main()
{
	double pi = 3.14;
	double* pi_ptr = &pi; // non-const pointer to non-const data
	(*pi_ptr)++;
	std::cout << pi << '\n';
	const double* pi_ptr2 = &pi; // non-const pointer to const data
	/// (*pi_ptr2)++; 	      
	(*pi_ptr)++;
	std::cout << pi << '\n';
	*pi_ptr = *pi_ptr2;
	std::cout << *pi_ptr << '\n';
	double e = 2.7182;
	pi_ptr2 = &e;
	/// (*pi_ptr2)++;
	std::cout << *pi_ptr2 << '\n';
	double* const pi_ptr3 = &e; // const pointer to non-const data
	++(*pi_ptr3);
	double g = 9.8;
	/// pi_ptr3 = &g;
	const double* const g_ptr = &g; // const pointer to const data
	/// (*g_ptr)++;
        /// g_ptr = pi_ptr;	
	return 0;
}
