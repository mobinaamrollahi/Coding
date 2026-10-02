#include <vector>
const int MAX_SIZE = 10;
const int BOTTOM_OF_STACK = -1;

struct Stack{
	std::vector<int> v;
	int top = BOTTOM_OF_STACK;
};

void push(Stack&, int);
void pop(Stack&);
int top(const Stack&);
bool is_full(const Stack&);
bool is_empty(const Stack&);
void print_stack(const Stack);
