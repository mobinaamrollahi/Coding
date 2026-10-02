#include <iostream>
#include <cstdlib>

void send(int* to, int* from, int count);

int main()
{
	int size = 20;
	int dest[size], src[size];

	for (int i = 0; i < size; ++i) src[i] = std::rand() % 2;
	
	send(dest, src, size);

	for (int i = 0; i < size; ++i) std::cout << src[i] << '\t' << dest [i] << '\n';
	return 0;
}


void send(int* to, int* from, int count)
{
	int n = (count + 7) / 8;
	switch (count % 8) {
	case 0: do { *to ++ = *from++;
	case 7: *to++ = *from++;
	case 6: *to++ = *from++;
	case 5: *to++ = *from++;
	case 4: *to++ = *from++;
	case 3: *to++ = *from++;
	case 2: *to++ = *from++;
	case 1: *to++ = *from++;
		} while (--n > 0);
	}
}
