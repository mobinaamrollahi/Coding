#include "stack.h"
#include <iostream>

inline bool is_full(const Stack& s)
{
	return s.top == MAX_SIZE - 1;
}
inline bool is_empty(const Stack& s)
{
	return s.top == BOTTOM_OF_STACK;
}
void push(Stack& s, int value)
{
	if(is_full(s)) std::cout << "Stack is full." << '\n';
	else {
		s.v.push_back(value);
		++s.top;
	}
}
void pop(Stack& s)
{
	if(is_empty(s)) std::cout << "Stack is empty." << '\n';
	else {
		s.v.pop_back();
		--s.top;
	}
}
int top(const Stack& s)
{
	auto t{BOTTOM_OF_STACK};
	if(!is_empty(s)) t = s.v.back();
	else std::cout << "Stack is empty." << '\n';
	return t;
}
void print_stack(const Stack s)
{
	std::cout << "[";
	for(int i = 0; i <= s.top; ++i) std::cout << s.v[i] << ' ';
	std::cout << "]\n";
}
