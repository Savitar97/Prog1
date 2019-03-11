#include <stdio.h>
int f(int a)
{
	return a+2;
}

int main()
{
	int a=5;
	printf("%d %d", f(a), a);
	return 0;
}