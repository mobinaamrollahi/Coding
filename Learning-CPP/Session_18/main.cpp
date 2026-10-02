#include "stack.h"
#include <iostream>

int main(){
	Stack my_stack;
	push(my_stack, 42);
	std::cout << "Stack after push: " << '\n';
	print_stack(my_stack);
	/* 
	pop(my_stack);
	std::cout << "Stack after pop: " << '\n';
	print_stack(my_stack);
	for(int i=0; i < 20; ++i) push(my_stack, i);
	*/
	return 0;
}
