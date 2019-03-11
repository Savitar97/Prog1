#include <stdio.h>

int main()
{
	int f(int *a)
{
	return *a;
}

int main()
{
	int a=1;
	printf("%d %d", f(&a), a);
	return 0;
}
}