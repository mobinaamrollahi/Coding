#include <stdio.h>
#include <string.h>

int str_len(const char* s)
{
	int i;
	for (i = 0; *s != '\0'; ++i, ++s)
		;
	return i; 
}

int str_to_int(const char s[])
{
	int result = 0;
	int i;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		result = 10 * result + (s[i] - '0');
	return result;
}

int main()
{
	char* h = "Hello, world!";
	int len = str_len(h);
	char str[] = { 'H', 'e', 'l', 'l', 'o', '\0' };	
	printf("The length is: %d\n", len);
	printf("%d\n", str_len(str));
	
	int n = str_to_int("123");
	int m = str_to_int("123sd");
	printf("n = %d, \tm = %d\n", n, m);

	char* src = "Goodbye";
	char dest[13] = { 'H', 'e', 'l', 'l', 'o' };
		
	strcat(dest, src);
	printf("new Dest + %s\n", dest);

	return 0;
}
