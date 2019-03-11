#include <stdio.h>
int f(int a,int b)
{
	return a+b;
}

int main()
{
int a=2;
printf("%d %d\n", f(a, ++a), f(++a,a));
return 0;
}